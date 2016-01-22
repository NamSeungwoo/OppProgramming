#pragma once
#include "Unit.h"
class ComeBackUnitEvent
{
public:
	virtual void operator() (Unit *unit) = 0;
};
class Place
{
	ComeBackUnitEvent *cbu_eventhandler;
protected:
	Place(ComeBackUnitEvent *cbu_eventhandler);
public:
	virtual void SetFocus() = 0;
	virtual void View(ostream &os = cout) const;

	void InsertUnit(Unit *unit);
};

ostream &operator << (ostream &os, const Place *place);