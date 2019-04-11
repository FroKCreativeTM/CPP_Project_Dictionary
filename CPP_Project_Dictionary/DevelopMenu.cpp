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
		wcout << L"==========\t개발자 모드\t==========" << endl;
		wcout << L"1. 단어 추가" << endl;
		wcout << L"2. 단어 삭제" << endl;
		wcout << L"3. 끝내기" << endl;
		wcout << L"메뉴를 선택하십시오 : "; iMenu = InputInt();

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
