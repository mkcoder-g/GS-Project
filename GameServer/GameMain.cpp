// GameMain.cpp: Inicialização e Loop Principal do GameServer.
// Responsável por ligar o servidor, conectar ao DataServer/JoinServer e gerenciar os timers.
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "GameMain.h"
#include "CommandManager.h"
#include "DSProtocol.h"
#include "HackCheck.h"
#include "JSProtocol.h"
#include "MonsterAI.h"
#include "MonsterManager.h"
#include "ObjectManager.h"
#include "QueueTimer.h"
#include "ScriptLoader.h"
#include "ServerInfo.h"
#include "SocketManagerUdp.h"
#include "User.h"
#include "Util.h"

// Objetos de conexão para falar com os outros servidores da arquitetura MU
CConnection gJoinServerConnection; // Conecta ao JoinServer (Login/Contas)
CConnection gDataServerConnection; // Conecta ao DataServer (Banco de Dados/Personagens)

// Função chamada quando a janela do GameServer abre
void GameMainInit(HWND hwnd) // OK
{
	// 1. Cria um "Mutex" (Trava) para impedir abrir o mesmo GameServer duas vezes
	if (CreateMutex(0, 0, gServerInfo->m_ServerMutex) == 0 || GetLastError() == ERROR_ALREADY_EXISTS)
	{
		ErrorMessageBox("Could not open GameServer (Already Exists)");
		return;
	}

	PROTECT_START // Macros de proteção (anti-crack da source original)

	// 2. Prepara a memória para os jogadores (gObj)
		gObjInit();

	// 3. Lê as configurações iniciais (CommonServer.cfg, etc)
	gServerInfo->ReadInit();

	// 4. Inicializa sistema de detecção de hack (Speedhack/Packet Editor básico)
	InitHackCheck();

	// 5. Carrega tabela de XP (Experience.txt)
	gObjSetExperienceTable();

	// 6. Carrega os monstros (MonsterSetBase.txt)
	gMonsterManager->SetMonsterData();

#if(GAMESERVER_UPDATE>=401)
	// Carrega Master Level se for Season 4 ou superior
	gMasterSkillTree->SetMasterLevelExperienceTable();
#endif

	// 7. Inicia a conexão com JoinServer e DataServer
	gJoinServerConnection.Init(hwnd, JoinServerProtocolCore);
	gDataServerConnection.Init(hwnd, DataServerProtocolCore);

	PROTECT_FINAL
}

// Envia status para o ConnectServer (Para aparecer a barra de % na sala)
void ConnectServerInfoSend() // OK
{
	PROTECT_START

		SDHP_GAME_SERVER_LIVE_SEND pMsg;

	pMsg.header.set(0xA1, sizeof(pMsg));

	pMsg.ServerCode = gServerInfo->m_ServerCode;       // Ex: 0 (Sala 1)
	pMsg.UserCount = gObjTotalUser;                    // Quantos players on
	pMsg.UserTotal = gServerInfo->m_ServerMaxUserNumber; // Capacidade Max

	// Envia via UDP (mais rápido, não precisa de confirmação)
	gSocketManagerUdp->DataSend((BYTE*)&pMsg, pMsg.header.size);

	PROTECT_FINAL
}

// Tenta conectar ao JoinServer (Onde verifica conta/senha)
bool JoinServerConnect(DWORD wMsg) // OK
{
	if (gJoinServerConnection.Connect(gServerInfo->m_JoinServerAddress, (WORD)gServerInfo->m_JoinServerPort, wMsg) == 0)
	{
		LogAdd(LOG_RED, "[JoinServer] Connection failure.");
		return 0;
	}

	// Se conectar, envia as informações básicas deste GS para o JS
	GJServerInfoSend();
	return 1;
}

// Tenta conectar ao DataServer (Onde salva itens, reset, level)
bool DataServerConnect(DWORD wMsg) // OK
{
	if (gDataServerConnection.Connect(gServerInfo->m_DataServerAddress, (WORD)gServerInfo->m_DataServerPort, wMsg) == 0)
	{
		LogAdd(LOG_RED, "[DataServer] Connection failure.");
		return 0;
	}

	// Se conectar, avisa o DS que este servidor está pronto
	GDServerInfoSend();
	return 1;
}

// Lógica de reconexão automática caso o JoinServer caia
bool JoinServerReconnect(HWND hwnd, DWORD wMsg) // OK
{
	if (gJoinServerConnection.CheckState() == 0)
	{
		gJoinServerConnection.Init(hwnd, JoinServerProtocolCore);
		return JoinServerConnect(wMsg);
	}

	return 1;
}

// Lógica de reconexão automática caso o DataServer caia
bool DataServerReconnect(HWND hwnd, DWORD wMsg) // OK
{
	if (gDataServerConnection.CheckState() == 0)
	{
		gDataServerConnection.Init(hwnd, DataServerProtocolCore);
		return DataServerConnect(wMsg);
	}

	return 1;
}

// Processa mensagens de rede do JoinServer (Callback do Windows)
void JoinServerMsgProc(WPARAM wParam, LPARAM lParam) // OK
{
	switch (LOWORD(lParam))
	{
	case FD_READ:
		gJoinServerConnection.DataRecv(); // Recebeu pacote
		break;
	case FD_WRITE:
		gJoinServerConnection.DataSendEx(); // Enviou pacote
		break;
	case FD_CLOSE:
		gJoinServerConnection.Disconnect(); // Caiu a conexão
		gObjAllDisconnect(); // Segurança: Desconecta todos os players para evitar dupar itens
		break;
	}
}

// Processa mensagens de rede do DataServer (Callback do Windows)
void DataServerMsgProc(WPARAM wParam, LPARAM lParam) // OK
{
	switch (LOWORD(lParam))
	{
	case FD_READ:
		gDataServerConnection.DataRecv();
		break;
	case FD_WRITE:
		gDataServerConnection.DataSendEx();
		break;
	case FD_CLOSE:
		gDataServerConnection.Disconnect();
		gObjAllDisconnect(); // Segurança crítica: Sem banco de dados, ninguém pode jogar.
		break;
	}
}

// ====================================================================================
// O CORAÇÃO DO JOGO: QueueTimerCallback
// Esta função é chamada automaticamente pelo sistema operacional várias vezes por segundo.
// Ela substitui o antigo Loop Infinito (While True) das versões 97d.
// ====================================================================================
void CALLBACK QueueTimerCallback(PVOID lpParameter, BOOLEAN TimerOrWaitFired) // OK
{
	PROTECT_START

		static CCriticalSection critical; // Evita que duas threads mexam na mesma coisa ao mesmo tempo

	critical.lock(); // Bloqueia acesso para evitar crash

	switch (((int)lpParameter))
	{
	case QUEUE_TIMER_MONSTER:
		gObjectManager->ObjectMonsterAndMsgProc(); // Respawn e lógica básica de mob
		break;
	case QUEUE_TIMER_MONSTER_MOVE:
		gObjectManager->ObjectMoveProc(); // Monstros andando
		break;
#if(GAMESERVER_UPDATE>=201)
	case QUEUE_TIMER_MONSTER_AI:
		gMonsterAI->MonsterAIProc(); // Inteligência Artificial (Skills de monstros)
		break;
	case QUEUE_TIMER_MONSTER_AI_MOVE:
		gMonsterAI->MonsterMoveProc(); // Movimento específico da IA
		break;
#endif
	case QUEUE_TIMER_EVENT:
		gObjEventRunProc(); // Gerencia eventos (Blood Castle, Devil Square, Invasões)
		break;
	case QUEUE_TIMER_VIEWPORT:
		gObjViewportProc(); // Atualiza o que os jogadores veem na tela (quem entrou/saiu da visão)
		break;
	case QUEUE_TIMER_FIRST:
		gObjFirstProc(); // Processos prioritários
		break;
	case QUEUE_TIMER_CLOSE:
		gObjCloseProc(); // Limpa usuários desconectados da memória
		break;
	case QUEUE_TIMER_ACCOUNT_LEVEL:
		gObjAccountLevelProc(); // Verifica VIP e vencimento de contas
		break;
	case QUEUE_TIMER_LUA:
		gScriptLoader->OnTimerThread(); // Se tiver scripts Lua rodando
		break;
	case QUEUE_TIMER_LUA_ASYNC:
		gScriptLoader->OnSQLAsyncResult(); // Respostas do SQL para scripts Lua
		break;
#if(GAMESERVER_UPDATE>=701)
	case QUEUE_TIMER_MATH_AUTHENTICATOR:
		gObjMathAuthenticatorProc();
		break;
#endif
	}

	critical.unlock(); // Libera o acesso

	PROTECT_FINAL
}