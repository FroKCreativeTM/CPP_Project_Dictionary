#pragma once

#define SAFE_DELETE(p) if(p) { delete p; p=NULL; }

static int InputInt()
{
	int iInt = 0;

	cin >> iInt;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(1024, '\n');
		return INT_MAX;
	}

	return iInt;
};
