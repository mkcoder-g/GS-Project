// MonsterSetBase.h: interface for the CMonsterSetBase class.
//
//////////////////////////////////////////////////////////////////////

#pragma once
#include <vector> // Adicionado para suportar alocação dinâmica

struct MONSTER_SET_BASE_INFO
{
	int Type;
	int MonsterClass;
	int Map;
	int Dis;
	int X;
	int Y;
	int Dir;
	int TX;
	int TY;
};

class CMonsterSetBase
{
	CMonsterSetBase();
	virtual ~CMonsterSetBase();
	SingletonInstance(CMonsterSetBase)
public:
	void LoadSpawn();
	void Load(char* path, int MapNumber);
	void SetInfo(MONSTER_SET_BASE_INFO info);
	bool GetPosition(int index, short map, short* ox, short* oy);
	bool GetBoxPosition(int map, int x, int y, int tx, int ty, short* ox, short* oy);
public:
	std::vector<MONSTER_SET_BASE_INFO> m_MonsterSetBaseInfo; // Array estático substituído
};

#define gMonsterSetBase SingNull(CMonsterSetBase)