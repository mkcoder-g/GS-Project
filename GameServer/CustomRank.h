#pragma once

#include "Protocol.h"
#include "User.h"

struct CUSTOM_RANK_INFO
{
	int RankIndex;
	char RankName[32];
	int MinReset;
};

// Estrutura do Pacote que será enviado ao Main
struct PMSG_CUSTOM_RANK_SEND
{
	PSBMSG_HEAD header; // Trocado para Cabeçalho Duplo (PSBMSG_HEAD)
	WORD index;
	WORD rankIndex;
};

class CCustomRank
{
public:
	CCustomRank();
	virtual ~CCustomRank();
	void Load(char* path);
	int GetPlayerRank(int aIndex);
	void SendRankToViewport(int aIndex);
public:
	std::vector<CUSTOM_RANK_INFO> m_RankInfo;
};

extern CCustomRank gCustomRank;