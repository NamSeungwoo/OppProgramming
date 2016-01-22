#include "Man.h"

Man::Man(string _name)
{
	name = _name;
	cout << name << "개체 생성" << endl;
	arm = new Arm();
}

Man::~Man(void)
{
	cout << name << "개체 소멸" << endl;
	delete arm;
}