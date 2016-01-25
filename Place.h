#pragma once
#include "Unit.h"
#include "Arr.h"
class ComeBackUnitEvent
{
public:
	virtual void operator() (Unit *unit) = 0;
};

class Place
{
	Arr<Unit *> *units;
	ComeBackUnitEvent *cbu_eventhandler;
protected:
	Place(ComeBackUnitEvent *cbu_eventhandler);
	void ComeBackUnit();
	IPlay *IndexAt(int index, bool) const;
	IRelax *IndexAt(int index, int) const;
	IPlay *SelectUnit(bool) const;
	IRelax *SelectUnit(int) const;
private:
	void Remove(Unit *unit);
	Unit *IndexAt(int index) const;
	Unit *SelectUnit() const; 
public:
	virtual void SetFocus() = 0;
	virtual void View(ostream &os = cout) const;

	void InsertUnit(Unit *unit);
};

ostream &operator << (ostream &os, const Place *place);