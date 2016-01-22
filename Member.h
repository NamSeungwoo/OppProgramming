#pragma once
#include "MyGlobal.h"
class Member
{
	const int num;
	string name;
public:
	Member(int _num, string _name);
	int GetNum() const;
	string GetName() const;
};

extern ostream &operator << (ostream &os, const Member &member);
extern ostream &operator << (ostream &os, const Member *member);