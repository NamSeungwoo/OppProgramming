#pragma once
#include <string>
#include "Arm.h"

class Man
{
	string name;
	Arm *arm;
public:
	Man(string _name);
	~Man(void);
};