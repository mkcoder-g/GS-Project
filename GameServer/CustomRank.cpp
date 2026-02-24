#include "stdafx.h"
#include "CustomRank.h"
#include "ReadFile.h" // Alterado de MemScript para ReadFile
#include "Viewport.h" // Adicionado para identificar VIEWPORT_WAIT/SEND
#include "Util.h"
#include "User.h"

CCustomRank gCustomRank;

CCustomRank::CCustomRank()
{
	this->m_RankInfo.clear();
}

CCustomRank::~CCustomRank()
{
}

void CCustomRank::Load(char* path)
{
	CReadFile* lpReadFile = new CReadFile; // Atualizado para a classe do seu emulador

	if (lpReadFile == 0)
	{
		ErrorMessageBox(READ_FILE_ALLOC_ERROR, path); // Atualizado
		return;
	}

	if (lpReadFile->SetBuffer(path) == 0)
	{
		ErrorMessageBox(lpReadFile->GetLastError());
		delete lpReadFile;
		return;
	}

	this->m_RankInfo.clear();

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
				if (section == 0)
				{
					if (strcmp("end", lpReadFile->GetAsString()) == 0)
					{
						break;
					}

					CUSTOM_RANK_INFO info;

					info.RankIndex = lpReadFile->GetNumber();
					strcpy_s(info.RankName, lpReadFile->GetAsString());
					info.MinReset = lpReadFile->GetAsNumber();

					this->m_RankInfo.push_back(info);
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

int CCustomRank::GetPlayerRank(int aIndex)
{
	if (gObjIsConnected(aIndex) == 0)
	{
		return 0;
	}

	LPOBJ lpObj = &gObj[aIndex];

	int CurrentRank = 0; // 0 = Sem Patente (Iniciante)

	// Varre a lista de patentes para achar a mais alta que o jogador alcançou
	for (std::vector<CUSTOM_RANK_INFO>::iterator it = this->m_RankInfo.begin(); it != this->m_RankInfo.end(); it++)
	{
		if (lpObj->Reset >= it->MinReset) // Lendo o Reset da classe User
		{
			CurrentRank = it->RankIndex;
		}
	}

	return CurrentRank;
}

void CCustomRank::SendRankToViewport(int aIndex)
{
	if (gObjIsConnected(aIndex) == 0)
	{
		return;
	}

	LPOBJ lpObj = &gObj[aIndex];

	PMSG_CUSTOM_RANK_SEND pMsg;
	pMsg.header.set(0xF3, 0xE3, sizeof(pMsg)); // Agora o set() aceitará os 3 argumentos

	// Envia o rank dos outros jogadores na tela para o Cliente do jogador
	for (int i = 0; i < MAX_VIEWPORT; i++)
	{
		if (lpObj->VpPlayer[i].state == VIEWPORT_SEND || lpObj->VpPlayer[i].state == VIEWPORT_WAIT)
		{
			if (lpObj->VpPlayer[i].type == OBJECT_USER)
			{
				int TargetIndex = lpObj->VpPlayer[i].index;

				if (gObjIsConnected(TargetIndex) != 0)
				{
					pMsg.index = TargetIndex;
					pMsg.rankIndex = this->GetPlayerRank(TargetIndex);
					DataSend(aIndex, (BYTE*)&pMsg, pMsg.header.size);
				}
			}
		}
	}

	// Envia o rank dele próprio para ele
	pMsg.index = aIndex;
	pMsg.rankIndex = this->GetPlayerRank(aIndex);
	DataSend(aIndex, (BYTE*)&pMsg, pMsg.header.size);
}