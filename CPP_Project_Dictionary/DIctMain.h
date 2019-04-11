#pragma once

#include "Defines.h"

class DictMain
{
private :
	DictMain();
	~DictMain();
	static DictMain* instance;

public:
	static DictMain* GetInstance();
	static void DestInstance();
	void MainRun();
};