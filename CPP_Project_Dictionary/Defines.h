#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

#include "Macro.h"

using namespace std;

typedef wchar_t wchar;

// �߰��� ����� ���ʽÿ�.

struct _tagDictWord
{
	wchar word;
	wchar meaning;
};