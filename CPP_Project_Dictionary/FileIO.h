#pragma once

#include "Defines.h"

class FileIO
{
private : 
	FileIO();
	~FileIO();
	static FileIO* instance;
public:
	static FileIO* GetInstance();
	static void DestroyInstance();
	void Save();
	void Load();
};

