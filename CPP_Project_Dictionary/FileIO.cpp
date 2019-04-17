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

void FileIO::Save(Dictionary* dicParam)
{
	wofstream ToSaveFile(L"data.txt");

	if (!ToSaveFile)
		return;

	ToSaveFile.imbue(locale("kor"));

	ToSaveFile << dicParam->iSize;

	// for문은 MAX 변수를 생성해서 그걸로 컨트롤 하는 방향으로
	for (int i = 0; i < dicParam->iSize; i++)
	{
		if (i != dicParam->iSize - 1)
			ToSaveFile << dicParam->tDW[i].word << endl << dicParam->tDW[i].meaning << endl;
		else
			ToSaveFile << dicParam->tDW[i].word << endl << dicParam->tDW[i].meaning;
	}

	ToSaveFile.close();
}

void FileIO::Load(Dictionary* dicParam)
{
	wifstream ToLoadFile(L"data.txt");

	if (!ToLoadFile)
	{
		wcerr << L"데이터 파일이 없습니다." << endl;
		return;
	}

	ToLoadFile.imbue(locale("kor"));

	ToLoadFile >> dicParam->iSize;

	while (!ToLoadFile.eof())
	{
		int i = 0;

		getline(ToLoadFile, dicParam->tDW[i].word);
		getline(ToLoadFile, dicParam->tDW[i].meaning);

		wcout << dicParam->tDW[i].word << " " << dicParam->tDW[i].meaning << endl;

		i++;
	}
}