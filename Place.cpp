#include "Place.h"

Place::Place(ComeBackUnitEvent *cbu_eventhandler)
{
	this->cbu_eventhandler = cbu_eventhandler;
}
void Place::InsertUnit(Unit *unit)
{
	throw "Place::InsertUnit을 구현하지 않았음";
}

void Place::View(ostream &os) const
{
	throw "Place::View를 구현하지 않았음";
}

ostream &operator <<(ostream &os, const Place *place)
{
	place->View(os);
	return os;
}

class ComeBackUnitEvent
{
public:
	virtual void operator()(Unit *unit) = 0;
};