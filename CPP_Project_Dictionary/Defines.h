#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

#include "Macro.h"

using namespace std;

typedef wchar_t wchar;

// 추가할 헤더를 쓰십시오.

struct _tagDictWord
{
	wchar word;
	wchar meaning;
};