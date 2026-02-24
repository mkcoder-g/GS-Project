#pragma once

#include "Protocol.h"

#define MAX_RANKING_PLAYERS 10 // Top 10

// Pacote que o GS recebe do Cliente (F5 Apertado)
struct PMSG_CUSTOM_RANKING_RECV
{
	PBMSG_HEAD header; // C1:F3:E0
};

// Pacote de Resposta do GS para o Cliente (Dados)
struct PMSG_CUSTOM_RANKING_SEND {
	PSWMSG_HEAD header;
	BYTE count;
};

// Estrutura do Jogador empacotada
struct CUSTOM_RANKING_DATA_GS
{
	char name[16]; // <-- MUDOU PARA 16 (Alinhamento perfeito)
	DWORD resets;
	DWORD mresets;
	DWORD level;
};

class CCustomRankingTotal
{
public:
	CCustomRankingTotal();
	virtual ~CCustomRankingTotal();

	void LoadRanking();
	void CGCustomRankingRecv(PMSG_CUSTOM_RANKING_RECV* lpMsg, int aIndex);

private:
	CUSTOM_RANKING_DATA_GS m_RankingData[MAX_RANKING_PLAYERS];
	int m_RankingCount;
	DWORD m_TickCount;
};

extern CCustomRankingTotal gCustomRankingTotal;