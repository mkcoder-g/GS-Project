#pragma once

#include "User.h"
#include <map>
#include "Singleton.h" 
#include "Protocol.h"

// Tipos de Prêmio
enum eDailyRewardType
{
	DAILY_REWARD_ITEM = 0,
	DAILY_REWARD_ZEN = 1,
	DAILY_REWARD_PCPOINT = 2,
};

// Estrutura que guarda a configuração de cada Dia (1 a 31) no GS
struct DAILY_REWARD_INFO
{
	int Day;
	int Type;
	int ItemIndex;
	int Level;
	int Skill;
	int Luck;
	int Option;
	int Exc;
	int Amount;
};

// ==============================================================
// PACOTES DE COMUNICAÇÃO: CLIENTE <-> SERVIDOR
// ==============================================================
#pragma pack(push, 1)

// Recebe o Clique do Botão "Receber"
struct PMSG_DAILY_REWARD_CLAIM_RECV
{
	PSBMSG_HEAD header; // C1:F3:EB
};

// Recebe o Pedido para abrir a Janela do Calendário
struct PMSG_DAILY_REWARD_DATA_RECV
{
	PSBMSG_HEAD header; // C1:F3:EC
};

// Estrutura do item individual para o Calendário
struct DAILY_REWARD_DATA_CLIENT
{
	BYTE Day;
	BYTE RewardType;
	WORD ItemIndex;
	BYTE ItemLevel;
	DWORD Amount;
	BYTE Claimed; // 0 = Não Recebeu, 1 = Já Recebeu
};

// Envia a Lista dos 31 dias para o Cliente
struct PMSG_DAILY_REWARD_DATA_SEND
{
	PSWMSG_HEAD header; // C2:F3:EC (Usamos PSW porque o pacote é grande)
	BYTE CurrentDay;    // Para o Cliente saber que dia é hoje
	BYTE Count;         // Quantos dias carregaram do .txt
	DAILY_REWARD_DATA_CLIENT RewardList[31]; // A lista de dias
};

#pragma pack(pop)
// ==============================================================

// --- ESTRUTURAS DO DATASERVER ANTIGO (MANTIDAS) ---
struct SDHP_DAILY_REWARD_INFO_RECV
{
	PBMSG_HEAD header;
	WORD aIndex;
	char account[11];
	char name[11];
	int index;
	BYTE result;
};

struct SDHP_DAILY_REWARD_INFO_SEND
{
	PBMSG_HEAD header;
	WORD aIndex;
	char account[11];
	char name[11];
	int index;
	int MinOnlineTime;
};
// ---------------------------------------------------

class CCustomDailyReward
{
	CCustomDailyReward();
	virtual ~CCustomDailyReward();
	SingletonInstance(CCustomDailyReward)

public:
	void Init();
	void Load(char* path);

	bool GetRewardInfo(int day, DAILY_REWARD_INFO* lpInfo);

	// Funções Mestre
	void CGCustomDailyRewardRecv(PMSG_DAILY_REWARD_CLAIM_RECV* lpMsg, int aIndex);
	void CGCustomDailyRewardDataRecv(PMSG_DAILY_REWARD_DATA_RECV* lpMsg, int aIndex);

	// Legado do DataServer
	void DGDailyRewardCheckRecv(SDHP_DAILY_REWARD_INFO_RECV* lpMsg);
	void GDDailyRewardCheckSend(int aIndex);

private:
	std::map<int, DAILY_REWARD_INFO> m_DailyRewardInfo;
};

#define gCustomDailyReward SingNull(CCustomDailyReward)