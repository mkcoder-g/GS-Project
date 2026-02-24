#include "stdafx.h"
#include "CustomRankingTotal.h"
#include "QueryManager.h" 
#include "Util.h"
#include "User.h"
#include "Log.h"

CCustomRankingTotal gCustomRankingTotal;

CCustomRankingTotal::CCustomRankingTotal()
{
	this->m_RankingCount = 0;
	this->m_TickCount = 0;
	memset(this->m_RankingData, 0, sizeof(this->m_RankingData));
}

CCustomRankingTotal::~CCustomRankingTotal()
{
}

void CCustomRankingTotal::LoadRanking()
{
	// Atualiza a cada 5 minutos
	if (GetTickCount() - this->m_TickCount < 300000 && this->m_TickCount != 0) return;
	this->m_TickCount = GetTickCount();

	// ==============================================================
	// BUSCA A CONEXÃO AUTOMATICAMENTE DO ARQUIVO .DAT
	// ==============================================================
	char szODBC[32] = { 0 };
	char szUser[32] = { 0 };
	char szPass[32] = { 0 };

	// Ele vai ler as informações do seu arquivo GameServerInfo - Custom.dat
	GetPrivateProfileString("CustomRanking", "ODBC", "MuOnline", szODBC, sizeof(szODBC), ".\\Data\\GameServerInfo - Custom.dat");
	GetPrivateProfileString("CustomRanking", "User", "sa", szUser, sizeof(szUser), ".\\Data\\GameServerInfo - Custom.dat");
	GetPrivateProfileString("CustomRanking", "Pass", "", szPass, sizeof(szPass), ".\\Data\\GameServerInfo - Custom.dat");
	// ==============================================================

	CQueryManager CustomDB;

	if (CustomDB.Connect(szODBC, szUser, szPass) == false)
	{
		LogAdd(LOG_RED, "[CustomRank] ERRO: Nao foi possivel conectar ao SQL. Verifique o GameServerInfo - Custom.dat!");
		return;
	}

	// PESQUISA GLOBAL
	if (CustomDB.ExecQuery("SELECT TOP 10 Name, ResetCount, MasterResetCount, cLevel FROM Character WHERE CtlCode < 8 ORDER BY ResetCount DESC, MasterResetCount DESC, cLevel DESC"))
	{
		int count = 0;
		memset(this->m_RankingData, 0, sizeof(this->m_RankingData));

		while (CustomDB.Fetch() != SQL_NO_DATA)
		{
			memset(this->m_RankingData[count].name, 0, sizeof(this->m_RankingData[count].name));
			CustomDB.GetAsString("Name", this->m_RankingData[count].name, 11);

			this->m_RankingData[count].resets = CustomDB.GetAsInteger("ResetCount");
			this->m_RankingData[count].mresets = CustomDB.GetAsInteger("MasterResetCount");
			this->m_RankingData[count].level = CustomDB.GetAsInteger("cLevel");

			count++;
			if (count >= MAX_RANKING_PLAYERS) break;
		}
		this->m_RankingCount = count;
		CustomDB.Close();

		LogAdd(LOG_BLUE, "[CustomRank] SUCESSO: %d jogadores carregados com Reset e Master Reset globais!", count);
	}
	else
	{
		LogAdd(LOG_RED, "[CustomRank] ERRO SQL: Falha na execucao da Query.");
	}

	CustomDB.Disconnect();
}

void CCustomRankingTotal::CGCustomRankingRecv(PMSG_CUSTOM_RANKING_RECV* lpMsg, int aIndex)
{
	if (gObjIsConnected(aIndex) == false) return;

	this->LoadRanking();

	BYTE send[2048];
	PMSG_CUSTOM_RANKING_SEND pMsg;

	pMsg.header.set(0xF3, 0xE5, 0);

	int size = sizeof(pMsg);
	pMsg.count = this->m_RankingCount;

	for (int i = 0; i < this->m_RankingCount; i++)
	{
		memcpy(&send[size], &this->m_RankingData[i], sizeof(CUSTOM_RANKING_DATA_GS));
		size += sizeof(CUSTOM_RANKING_DATA_GS);
	}

	pMsg.header.size[0] = SET_NUMBERHB(size);
	pMsg.header.size[1] = SET_NUMBERLB(size);

	memcpy(send, &pMsg, sizeof(pMsg));

	DataSend(aIndex, send, size);
}