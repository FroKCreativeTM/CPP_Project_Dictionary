#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

#include "Macro.h"


typedef wchar_t wchar;

typedef struct _tagDictWord
{
	wchar word;
	wchar meaning;
}DictWord;

enum MAINMENU
{
	MM_NONE=0,
	MM_SEARCH,
	MM_SAVED,
	MM_EXIT,
	MM_DEVELOP
};