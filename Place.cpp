#include "Place.h"

Place::Place(ComeBackUnitEvent *cbu_eventhandler)
{
	this->cbu_eventhandler = cbu_eventhandler;
}
void Place::InsertUnit(Unit *unit)
{
	throw "Place::InsertUnit�� �������� �ʾ���";
}

void Place::View(ostream &os) const
{
	throw "Place::View�� �������� �ʾ���";
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