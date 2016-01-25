#pragma once
#include "Common.h"
#include "MyGlobal.h"
#include "IPlay.h"
#include "IRelax.h"
class Unit : public IPlay, public IRelax
{
	const int seq;
	string name;
protected:
	Unit(int _seq, string _name);
	friend class UnitFactory;
	virtual ~Unit();
public:
	void View(ostream &os = cout)const;
	void ViewConcert();
	void Introduce();
	int GetSeq() const;
	string GetName() const;
};

ostream &operator << (ostream &os, const Unit *unit);