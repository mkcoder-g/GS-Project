// 380ItemOption.cpp: Implementação da classe C380ItemOption.
// Responsável pelas opções PvP (Roxas) dos itens 380.
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "380ItemOption.h"
#include "380ItemType.h"
#include "ItemManager.h"
#include "ReadFile.h"
#include "Util.h"

//////////////////////////////////////////////////////////////////////
// Construção/Destruição
//////////////////////////////////////////////////////////////////////

C380ItemOption::C380ItemOption() // OK
{
#if(GAMESERVER_UPDATE>=201)
	this->Init();
#endif
}

C380ItemOption::~C380ItemOption() // OK
{
}

// Inicializa o array de opções limpando os dados anteriores
void C380ItemOption::Init() // OK
{
#if(GAMESERVER_UPDATE>=201)
	for (int n = 0; n < MAX_380_ITEM_OPTION; n++)
	{
		this->m_380ItemOptionInfo[n].Index = -1;
	}
#endif
}

// Carrega as configurações do arquivo (geralmente Data/Item/380ItemOption.dat)
void C380ItemOption::Load(char* path) // OK
{
#if(GAMESERVER_UPDATE>=201)

	CReadFile* lpReadFile = new CReadFile;

	if (lpReadFile == 0)
	{
		ErrorMessageBox(READ_FILE_ALLOC_ERROR, path);
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

			if (strcmp("end", lpReadFile->GetString()) == 0)
			{
				break;
			}

			ITEM_380_OPTION_INFO info;

			memset(&info, 0, sizeof(info));

			info.Index = lpReadFile->GetNumber(); // ID da Opção

			strcpy_s(info.Name, lpReadFile->GetAsString()); // Nome da Opção (apenas visual/log)

			info.Value = lpReadFile->GetAsNumber(); // Valor padrão da opção

			this->SetInfo(info);
		}
	}
	catch (...)
	{
		ErrorMessageBox(lpReadFile->GetLastError());
	}

	delete lpReadFile;

#endif
}

// Armazena a informação lida na memória do Server
void C380ItemOption::SetInfo(ITEM_380_OPTION_INFO info) // OK
{
#if(GAMESERVER_UPDATE>=201)

	if (info.Index < 0 || info.Index >= MAX_380_ITEM_OPTION)
	{
		return;
	}

	this->m_380ItemOptionInfo[info.Index] = info;

#endif
}

// Retorna o ponteiro da informação da opção baseada no Index
ITEM_380_OPTION_INFO* C380ItemOption::GetInfo(int index) // OK
{
#if(GAMESERVER_UPDATE>=201)

	if (index < 0 || index >= MAX_380_ITEM_OPTION)
	{
		return 0;
	}

	if (this->m_380ItemOptionInfo[index].Index != index)
	{
		return 0;
	}

	return &this->m_380ItemOptionInfo[index];

#else
	return 0;
#endif
}

// Verifica se o item tem a opção 380 ativa (Byte flag 0x80)
bool C380ItemOption::Is380Item(CItem* lpItem) // OK
{
#if(GAMESERVER_UPDATE>=201)

	// O bit 0x80 (10000000 em binário) no m_ItemOptionEx define se é 380 ou não.
	if ((lpItem->m_ItemOptionEx & 0x80) == 0)
	{
		return 0; // Não é item 380 ou a opção não está ativa
	}

	return 1; // É item 380 com opção ativa

#else
	return 0;
#endif
}

// Função principal que percorre o inventário e aplica os atributos
void C380ItemOption::Calc380ItemOption(LPOBJ lpObj, bool flag) // OK
{
#if(GAMESERVER_UPDATE>=201)

	// Percorre apenas os itens equipados (0 a 11 geralmente)
	for (int n = 0; n < INVENTORY_WEAR_SIZE; n++)
	{
		// Verifica se o item é válido e se tem a flag 380 ativa
		if (lpObj->Inventory[n].IsItem() == 0 || lpObj->Inventory[n].m_IsValidItem == 0 || lpObj->Inventory[n].Is380Item() == 0)
		{
			continue;
		}

		// Cada item 380 pode ter até 2 opções extras (definidas em 380ItemType)
		for (int i = 0; i < MAX_380_ITEM_OPTION_INDEX; i++)
		{
			// Pega qual é a opção (Ex: Adicionar HP, Adicionar SD, etc)
			int ItemOption = g380ItemType->Get380ItemOptionIndex(lpObj->Inventory[n].m_Index, i);

			if (ItemOption == ITEM_380_OPTION_NONE)
			{
				continue;
			}

			ITEM_380_OPTION_INFO* lpInfo = this->GetInfo(ItemOption);

			if (lpInfo == 0)
			{
				continue;
			}

			// Pega o valor da opção. Se o Type retornar -1, usa o valor padrão do arquivo Option.
			int OptionValue = g380ItemType->Get380ItemOptionValue(lpObj->Inventory[n].m_Index, i);

			OptionValue = ((OptionValue == -1) ? lpInfo->Value : OptionValue);

			// Aplica o status no personagem
			this->InsertOption(lpObj, lpInfo->Index, OptionValue, flag);
		}
	}

#endif
}

// Aplica os valores calculados diretamente nas variáveis do personagem (User)
void C380ItemOption::InsertOption(LPOBJ lpObj, int index, int value, bool flag) // OK
{
#if(GAMESERVER_UPDATE>=201)

	// A flag geralmente indica se é para aplicar (0) ou não. 
	// Dependendo de onde é chamada no User.cpp (gObjCalCharacter), isso evita cálculo duplo.
	if (flag != 0)
	{
		return;
	}

	switch (index)
	{
	case ITEM_380_OPTION_ADD_ATTACK_SUCCESS_RATE_PVP:
		lpObj->AttackSuccessRatePvP += value;
		break;
	case ITEM_380_OPTION_ADD_DAMAGE_PVP:
		lpObj->DamagePvP += value;
		break;
	case ITEM_380_OPTION_ADD_DEFENSE_SUCCESS_RATE_PVP:
		lpObj->DefenseSuccessRatePvP += value;
		break;
	case ITEM_380_OPTION_ADD_DEFENSE_PVP:
		lpObj->DefensePvP += value;
		break;
	case ITEM_380_OPTION_ADD_MAX_HP:
		lpObj->AddLife += value; // Adiciona ao HP Extra
		break;
	case ITEM_380_OPTION_ADD_MAX_SD:
		lpObj->AddShield += value; // Adiciona ao SD Extra
		break;
	case ITEM_380_OPTION_SET_SD_RECOVERY_TYPE:
		lpObj->SDRecoveryType = value; // Geralmente define se recarrega SD ao matar mob
		break;
	case ITEM_380_OPTION_ADD_SD_RECOVERY_RATE:
		lpObj->SDRecoveryRate += value; // Aumenta a velocidade de recarga do SD
		break;
	}

#endif
}