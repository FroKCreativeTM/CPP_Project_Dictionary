#include "DIctMain.h"

int main()
{
	setlocale(LC_ALL, "korean");

	if (!DictMain::GetInstance())
	{
		DictMain::DestInstance();
		return 0;
	}

	DictMain::GetInstance()->MainRun();

	DictMain::DestInstance();

	return 0;
}