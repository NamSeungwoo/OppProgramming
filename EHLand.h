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
		throw "ComeBackHelper::operator()를 구현하지 않았음";
	}
};