#pragma once
#include "Unit.h"
#include "Magician.h"
#include "Artist.h"
#include "Worker.h"
#include "Arr.h"
class UnitFactory
{
	Arr<Unit *> *units;
	int u_seq;
public:
	UnitFactory();
	Unit *MakeUnit(int utype, string uname);
	~UnitFactory();
	
};