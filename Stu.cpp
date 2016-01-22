#include "Stu.h"

Stu::Stu(int _num, string _name) :num(_num)
{
	name = _name;
}


Stu::operator int()
{
	return num;
}
