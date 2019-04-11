#include "DIctMain.h"
#include "DictMenu.h"
#include "DevelopMenu.h"

DictMain* DictMain::instance = NULL;

DictMain::DictMain() {}
DictMain::~DictMain() {}

DictMain* DictMain::GetInstance()
{
	if (!instance)
	{
		instance = new DictMain();
		return instance;
	}
	return instance;
}

void DictMain::DestInstance()
{
	SAFE_DELETE(instance);
}

void DictMain::MainRun()
{
	int iMenu = 0;
	DictMenu cDM;

	while (iMenu <= MM_NONE || iMenu > MM_DEVELOP)
	{
		system("cls");
		wcout << L"==========\t메인 메뉴\t==========" << endl;
		wcout << L"1. 단어 찾기" << endl;
		wcout << L"2. 저장된 단어 보기" << endl;
		wcout << L"3. 끝내기" << endl;
		wcout << L"메뉴를 선택하십시오 : "; iMenu = InputInt();

		switch (iMenu)
		{
		case MM_SEARCH : 
			iMenu = 0;
			cDM.Search();
			break;
		case MM_SAVED : 
			iMenu = 0;
			cDM.Saved();
			break;
		case MM_EXIT : 
			wcout << L"종료!" << endl;
			return;
			break;
		case MM_DEVELOP : 
			iMenu = 0;
			break;
		}
	}

}