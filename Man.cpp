#include "Man.h"

Man::Man(string _name)
{
	name = _name;
	cout << name << "��ü ����" << endl;
	arm = new Arm();
}

Man::~Man(void)
{
	cout << name << "��ü �Ҹ�" << endl;
	delete arm;
}