#pragma once
#include <iostream>
#include <string>
using namespace std;

class Stu
{
	const int num;
	string name;
public:
	Stu(int _num, string _name);
	operator int();
	
};


