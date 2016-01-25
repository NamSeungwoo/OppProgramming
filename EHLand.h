#pragma once
#include "UnitFactory.h"
#include "Unit.h"
#include "Place.h"
#include "Village.h"
#include "Hall.h"
#include "Arr.h"

class ComeBackHelper;

class EHLand
{
	UnitFactory *unitfactory;
	ComeBackHelper *comebackhelper;
	Place *places[2];
	Arr<Unit*> *units;
	
public:
	void ReplaceUnit(Unit *unit);
	static void Start();
private:
	MyGlobal::KeyData SelectMenu();
	void MakeUnit();
	void MoveFocus();
	void MoveUnit();
	void ViewState();
	Place *SelectPlace();
	Unit *SelectUnit();
	void Remove(Unit *unit);
	void ViewUnits();
	Unit *FindUnit(int useq);

	EHLand();
	~EHLand();
	void Init();
	void Run();
	void Exit();
};
class ComeBackHelper : public ComeBackUnitEvent
{
	EHLand *owner;
public:
	ComeBackHelper(EHLand *owner)
	{
		this->owner = owner;
	}
	void operator() (Unit *unit)
	{
		owner->ReplaceUnit(unit);
	}
};