#include "DevelopMenu.h"

void AddWord()
{
}

void DeleteWord()
{
}

void Save()
{
}

void DeveloperMenu()
{
	int iMenu = 0;

	while (iMenu <= 1 || iMenu > 3)
	{
		wcout << L"==========\t������ ���\t==========" << endl;
		wcout << L"1. �ܾ� �߰�" << endl;
		wcout << L"2. �ܾ� ����" << endl;
		wcout << L"3. ������" << endl;
		wcout << L"�޴��� �����Ͻʽÿ� : "; iMenu = InputInt();

		switch (iMenu)
		{
		case 1 : 
			AddWord();
			break;
		case 2:
			DeleteWord();
			break;
		case 3 :
			Save();
			return;
		}
	}
}
