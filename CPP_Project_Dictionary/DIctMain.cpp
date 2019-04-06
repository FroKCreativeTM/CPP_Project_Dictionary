#include "DIctMain.h"

DictMain* DictMain::instance = NULL;

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

void DictMain::Run()
{
	wcout << L"실행" << endl;
}

DictMain::DictMain()
{
}

DictMain::~DictMain()
{
}
