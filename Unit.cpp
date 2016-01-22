#include "Unit.h"

Unit::Unit(int seq, string name)
{
	throw "Unit::Unit을 구현하지 않았음";
}

Unit::~Unit()
{
	throw "Unit::~Unit을 구현하지 않았음";
}

void Unit::View(ostream &os) const
{
	throw "Unit::View를 구현하지 않았음";
}

ostream &operator << (ostream &os, const Unit *unit)
{
	unit->View(os);
	return os;
}

void Unit::ViewConcert()
{
	throw "Unit::ViewConcert를 구현하지 않았음";
}

