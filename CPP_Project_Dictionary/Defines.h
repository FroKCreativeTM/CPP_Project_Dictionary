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

#define DICT_MAX 1000

typedef wchar_t wchar;

typedef struct _tagDictWord
{
	wchar * word;
	wchar * meaning;
}DictWord;

static DictWord tDW[DICT_MAX];

enum MAINMENU
{
	MM_NONE=0,
	MM_SEARCH,
	MM_SAVED,
	MM_EXIT,
	MM_DEVELOP
};