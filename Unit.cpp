#include "Unit.h"

Unit::Unit(int seq, string name)
{
	throw "Unit::Unit�� �������� �ʾ���";
}

Unit::~Unit()
{
	throw "Unit::~Unit�� �������� �ʾ���";
}

void Unit::View(ostream &os) const
{
	throw "Unit::View�� �������� �ʾ���";
}

ostream &operator << (ostream &os, const Unit *unit)
{
	unit->View(os);
	return os;
}

void Unit::ViewConcert()
{
	throw "Unit::ViewConcert�� �������� �ʾ���";
}

