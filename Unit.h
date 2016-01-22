#pragma once
#include "Common.h"
#include "MyGlobal.h"
#include "IPlay.h"
#include "IRelax.h"
class Unit : public IPlay, public IRelax
{
protected:
	Unit(int seq, string name);
	friend class UnitFactory;
	virtual ~Unit();
public:
	void View(ostream &os = cout)const;
	void ViewConcert();
	void Introduce();
};

ostream &operator << (ostream &os, const Unit *unit);