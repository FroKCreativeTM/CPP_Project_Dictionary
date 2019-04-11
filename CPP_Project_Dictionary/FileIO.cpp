#include "FileIO.h"

FileIO* FileIO::instance = NULL;

FileIO::FileIO() {}
FileIO::~FileIO() {}

FileIO* FileIO::GetInstance()
{
	if (instance == NULL)
	{
		instance = new FileIO();
		return instance;
	}
	return instance;
}

void FileIO::DestroyInstance()
{
	SAFE_DELETE(instance);
}

void FileIO::Save()
{
	wofstream ToSaveFile(L"data.txt");

	for (int i = 0; i < DICT_MAX; i++)
	{
		int iSize = wcslen(L"wchar");
		tDW[i].word = new wchar[iSize + 1];

		wcscpy(tDW[i].word, L"word");

		iSize = wcslen(L"meaning");
		tDW[i].meaning = new wchar[iSize + 1];
		wcscpy(tDW[i].meaning, L"meaning");
	
		ToSaveFile << tDW[i].word << L" " << tDW[i].meaning << endl;

		delete[] tDW[i].word;
		delete[] tDW[i].meaning;
	}
}

void FileIO::Load()
{
	wifstream ToLoadFile(L"data.txt");

	wstring wline;
	for(int i=0;i<DICT_MAX;i++)
	{

	}
}