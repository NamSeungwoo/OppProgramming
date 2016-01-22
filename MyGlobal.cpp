#include "MyGlobal.h"
#include <stdio.h>
#include <conio.h>

int MyGlobal::GetNum()
{
	int num;
	char buf[256 + 1];
	cin.getline(buf, 256);
	cin.clear();
	sscanf_s(buf, "%d", &num);
	return num;
}

string MyGlobal::GetStr()
{
	char buf[256 + 1];
	cin.getline(buf, 256);
	cin.clear();
	return buf;
}

MyGlobal::KeyData MyGlobal::GetKey()
{
	int key = _getch();
	if (key == 27)
		return ESC;
	if (key == 0)
	{
		key = _getch();
		switch (key)
		{
		case 59: return F1;
		case 60: return F2;
		case 61: return F3;
		case 62: return F4;
		case 63: return F5;
		case 64: return F6;
		case 65: return F7;
		}
	}
	return NO_DEFINED;
}