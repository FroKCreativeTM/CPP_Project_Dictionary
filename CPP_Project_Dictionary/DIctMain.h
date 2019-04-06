#pragma once

#include "Defines.h"

class DictMain
{
private : 
	static DictMain* instance;

public:
	DictMain();
	~DictMain();
	static DictMain* GetInstance();
	static void DestInstance();
	void Run();
};

