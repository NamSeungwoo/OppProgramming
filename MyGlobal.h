#pragma once
#include <iostream>
#include <string>
using namespace std;
// #pragma warning(disable:4996)

class MyGlobal
{
public:
	enum KeyData
	{
		NO_DEFINED,F1,F2,F3,F4,F5,F6,F7,ESC
	};
	static int GetNum();
	static string GetStr();
	static KeyData GetKey();
private:
	MyGlobal(void) {};
	~MyGlobal(void) {};
};
