#pragma once
#include "Unit.h"
#include "Magician.h"
#include "Artist.h"
#include "Worker.h"

class UnitFactory
{
public:
	UnitFactory();
	Unit *MakeUnit(int utype, string uname);
	~UnitFactory();

};