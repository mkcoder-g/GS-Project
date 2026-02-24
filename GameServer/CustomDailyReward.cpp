#include "stdafx.h" 
#include "CustomDailyReward.h"
#include "ReadFile.h" 
#include "Util.h"
#include "ItemManager.h" 
#include "Message.h"
#include "Notice.h"
#include "QueryManager.h"
#include "PcPoint.h"
#include "DSProtocol.h"

CCustomDailyReward::CCustomDailyReward()
{
	this->Init();
}

CCustomDailyReward::~CCustomDailyReward()
{
}

void CCustomDailyReward::Init()
{
	this->m_DailyRewardInfo.clear();
}

void CCustomDailyReward::Load(char* path)
{
	CReadFile* lpReadFile = new CReadFile;

	if (lpReadFile == 0)
	{
		return;
	}

	if (lpReadFile->SetBuffer(path) == 0)
	{
		ErrorMessageBox(lpReadFile->GetLastError());
		delete lpReadFile;
		return;
	}

	this->Init();

	try
	{
		while (true)
		{
			if (lpReadFile->GetToken() == TOKEN_END)
			{
				break;
			}

			int section = lpReadFile->GetNumber();

			while (true)
			{
				if (lpReadFile->GetToken() == TOKEN_END)
				{
					break;
				}

				if (section == 0)
				{
					if (strcmp("end", lpReadFile->GetString()) == 0)
					{
						break;
					}

					DAILY_REWARD_INFO info;

					info.Day = lpReadFile->GetNumber();
					info.Type = lpReadFile->GetAsNumber();

					int ItemSection = lpReadFile->GetAsNumber();
					int ItemType = lpReadFile->GetAsNumber();

					info.ItemIndex = GET_ITEM(ItemSection, ItemType);

					info.Level = lpReadFile->GetAsNumber();
					info.Skill = lpReadFile->GetAsNumber();
					info.Luck = lpReadFile->GetAsNumber();
					info.Option = lpReadFile->GetAsNumber();
					info.Exc = lpReadFile->GetAsNumber();
					info.Amount = lpReadFile->GetAsNumber();

					this->m_DailyRewardInfo.insert(std::pair<int, DAILY_REWARD_INFO>(info.Day, info));
				}
				else
				{
					break;
				}
			}
		}
	}
	catch (...)
	{
		ErrorMessageBox(lpReadFile->GetLastError());
	}

	delete lpReadFile;
}

bool CCustomDailyReward::GetRewardInfo(int day, DAILY_REWARD_INFO* lpInfo)
{
	std::map<int, DAILY_REWARD_INFO>::iterator it = this->m_DailyRewardInfo.find(day);

	if (it != this->m_DailyRewardInfo.end())
	{
		(*lpInfo) = it->second;
		return true;
	}

	return false;
}

// Funções Vazias para enganar o DSProtocol.cpp
void CCustomDailyReward::DGDailyRewardCheckRecv(SDHP_DAILY_REWARD_INFO_RECV* lpMsg)
{
}

void CCustomDailyReward::GDDailyRewardCheckSend(int aIndex)
{
}

// ==============================================================
// FUNÇÃO 1: RECEBE O CLIQUE E ENTREGA O PRÉMIO
// ==============================================================
// ==============================================================
// FUNÇÃO 1: RECEBE O CLIQUE E ENTREGA O PRÉMIO (ATUALIZADA)
// ==============================================================
void CCustomDailyReward::CGCustomDailyRewardRecv(PMSG_DAILY_REWARD_CLAIM_RECV* lpMsg, int aIndex)
{
	if (gObjIsConnected(aIndex) == 0) return;

	LPOBJ lpObj = &gObj[aIndex];

	SYSTEMTIME st;
	GetLocalTime(&st);

	DAILY_REWARD_INFO info;
	if (this->GetRewardInfo(st.wDay, &info) == false)
	{
		gNotice->GCNoticeSend(lpObj->Index, 1, 0, 0, 0, 0, 0, "[Bônus Diário] Nenhuma recompensa configurada para hoje.");
		return;
	}

	// ==========================================================
	// NOVO: Verifica espaço no inventário ANTES de ir à DB!
	// ==========================================================
	if (info.Type == DAILY_REWARD_ITEM)
	{
		if (gItemManager->CheckItemInventorySpace(lpObj, info.ItemIndex) == 0)
		{
			gNotice->GCNoticeSend(lpObj->Index, 1, 0, 0, 0, 0, 0, "[Bônus Diário] Inventario cheio! Liberte espaco e tente novamente.");
			return; // Pára aqui, para não queimar o dia do jogador!
		}
	}

	char szODBC[32] = { 0 };
	char szUser[32] = { 0 };
	char szPass[32] = { 0 };

	GetPrivateProfileString("CustomRanking", "ODBC", "MuOnline", szODBC, sizeof(szODBC), ".\\Data\\GameServerInfo - Custom.dat");
	GetPrivateProfileString("CustomRanking", "User", "sa", szUser, sizeof(szUser), ".\\Data\\GameServerInfo - Custom.dat");
	GetPrivateProfileString("CustomRanking", "Pass", "", szPass, sizeof(szPass), ".\\Data\\GameServerInfo - Custom.dat");

	CQueryManager CustomDB;

	if (CustomDB.Connect(szODBC, szUser, szPass) == false)
	{
		gNotice->GCNoticeSend(lpObj->Index, 1, 0, 0, 0, 0, 0, "[Bônus Diário] Erro de BD. Tente novamente mais tarde.");
		return;
	}

	if (CustomDB.ExecQuery("SELECT * FROM CustomDailyReward WHERE AccountID='%s' AND Year=%d AND Month=%d AND Day=%d", lpObj->Account, st.wYear, st.wMonth, st.wDay))
	{
		if (CustomDB.Fetch() != SQL_NO_DATA)
		{
			gNotice->GCNoticeSend(lpObj->Index, 1, 0, 0, 0, 0, 0, "[Bônus Diário] Você ja recebeu o prêmio de hoje!");
			CustomDB.Close();
			CustomDB.Disconnect();
			return;
		}
	}
	CustomDB.Close();

	// Grava na DB
	CustomDB.ExecQuery("INSERT INTO CustomDailyReward (AccountID, Year, Month, Day) VALUES ('%s', %d, %d, %d)", lpObj->Account, st.wYear, st.wMonth, st.wDay);
	CustomDB.Close();
	CustomDB.Disconnect();

	// Entrega do Prémio Atualizada
	if (info.Type == DAILY_REWARD_ITEM)
	{
		BYTE SocketOption[5] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
		// NOVO: Código '0xEB' cria o item imediatamente dentro do Inventário!
		GDCreateItemSend(lpObj->Index, 0xEB, 0, 0, info.ItemIndex, info.Level, 0, info.Skill, info.Luck, info.Option, lpObj->Index, info.Exc, 0, 0, 0, SocketOption, 0xFF, 0);

		gNotice->GCNoticeSend(lpObj->Index, 1, 0, 0, 0, 0, 0, "[Bônus Diário] Confira seu iventário!");
	}
	else if (info.Type == DAILY_REWARD_ZEN)
	{
		if ((lpObj->Money + info.Amount) > 2000000000) lpObj->Money = 2000000000;
		else lpObj->Money += info.Amount;

		GCMoneySend(lpObj->Index, lpObj->Money);
		gNotice->GCNoticeSend(lpObj->Index, 1, 0, 0, 0, 0, 0, "[Bônus Diário] Você recebeu %d Zen!", info.Amount);
	}
	else if (info.Type == DAILY_REWARD_PCPOINT)
	{
		gPcPoint->GDPcPointAddPointSaveSend(lpObj->Index, info.Amount);
		gNotice->GCNoticeSend(lpObj->Index, 1, 0, 0, 0, 0, 0, "[Bônus Diário] Você recebeu %d PC Points!", info.Amount);
	}

	// ==========================================================
	// NOVO: Mensagem Global (Texto Amarelo Padrão do Sistema)
	// ==========================================================
	gNotice->GCNoticeSendToAll(0, 0, 0, 0, 0, 0, "[Bônus Diário] O jogador %s coletou o seu bônus diario!", lpObj->Name);
}

// ==============================================================
// FUNÇÃO 2: MANDA O CALENDÁRIO PARA O CLIENTE
// ==============================================================
void CCustomDailyReward::CGCustomDailyRewardDataRecv(PMSG_DAILY_REWARD_DATA_RECV* lpMsg, int aIndex)
{
	if (gObjIsConnected(aIndex) == 0) return;

	LPOBJ lpObj = &gObj[aIndex];

	SYSTEMTIME st;
	GetLocalTime(&st);

	char szODBC[32] = { 0 };
	char szUser[32] = { 0 };
	char szPass[32] = { 0 };

	GetPrivateProfileString("CustomRanking", "ODBC", "MuOnline", szODBC, sizeof(szODBC), ".\\Data\\GameServerInfo - Custom.dat");
	GetPrivateProfileString("CustomRanking", "User", "sa", szUser, sizeof(szUser), ".\\Data\\GameServerInfo - Custom.dat");
	GetPrivateProfileString("CustomRanking", "Pass", "", szPass, sizeof(szPass), ".\\Data\\GameServerInfo - Custom.dat");

	CQueryManager CustomDB;
	bool claimedDays[32] = { false };

	if (CustomDB.Connect(szODBC, szUser, szPass))
	{
		if (CustomDB.ExecQuery("SELECT Day FROM CustomDailyReward WHERE AccountID='%s' AND Year=%d AND Month=%d", lpObj->Account, st.wYear, st.wMonth))
		{
			while (CustomDB.Fetch() != SQL_NO_DATA)
			{
				int claimedDay = CustomDB.GetAsInteger("Day");
				if (claimedDay >= 1 && claimedDay <= 31)
				{
					claimedDays[claimedDay] = true;
				}
			}
		}
		CustomDB.Close();
		CustomDB.Disconnect();
	}

	PMSG_DAILY_REWARD_DATA_SEND pMsg;
	pMsg.header.set(0xF3, 0x5B, sizeof(pMsg));
	pMsg.CurrentDay = (BYTE)st.wDay;
	pMsg.Count = 0;

	for (std::map<int, DAILY_REWARD_INFO>::iterator it = this->m_DailyRewardInfo.begin(); it != this->m_DailyRewardInfo.end(); it++)
	{
		if (pMsg.Count >= 31) break;

		pMsg.RewardList[pMsg.Count].Day = it->second.Day;
		pMsg.RewardList[pMsg.Count].RewardType = it->second.Type;
		pMsg.RewardList[pMsg.Count].ItemIndex = it->second.ItemIndex;
		pMsg.RewardList[pMsg.Count].ItemLevel = it->second.Level;
		pMsg.RewardList[pMsg.Count].Amount = it->second.Amount;
		pMsg.RewardList[pMsg.Count].Claimed = claimedDays[it->second.Day] ? 1 : 0;

		pMsg.Count++;
	}

	DataSend(aIndex, (BYTE*)&pMsg, sizeof(pMsg));
}