#pragma once

#pragma warning(disable:4996)

#include <iostream>
#include <string>
#include <fstream>
#include <wchar.h>
#include <Windows.h>
#include <locale>
#include <codecvt>
using namespace std;

#include "Macro.h"

#define DICT_MAX 1024

typedef wchar_t wchar;

typedef struct _tagDictWord
{
	wstring word;
	wstring meaning;
}DictWord;

typedef struct _tagDictionary
{
	DictWord tDW[DICT_MAX];
	int iSize;
}Dictionary;

enum MAINMENU
{
	MM_NONE=0,
	MM_SEARCH,
	MM_SAVED,
	MM_EXIT,
	MM_DEVELOP
};