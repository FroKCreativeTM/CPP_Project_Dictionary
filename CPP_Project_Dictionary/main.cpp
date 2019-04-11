#include "DIctMain.h"
#include "FileIO.h"


int main()
{
	setlocale(LC_ALL, "korean");
	
	if (!FileIO::GetInstance())
	{
		FileIO::DestroyInstance();
		return 0;
	}

	FileIO::GetInstance()->Save();

	//FileIO::GetInstance()->Load();

	FileIO::DestroyInstance();

	//if (!DictMain::GetInstance())
	//{
	//	DictMain::DestInstance();
	//	return 0;
	//}

	//DictMain::GetInstance()->MainRun();

	//DictMain::DestInstance();

	return 0;
}