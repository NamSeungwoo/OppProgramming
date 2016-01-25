#include "UnitFactory.h"
UnitFactory::UnitFactory()
{
	units = new Arr<Unit *>(10);
	u_seq = 0;
	

}

Unit *UnitFactory::MakeUnit(int utype, string name)
{
	Unit *unit = 0;
	if (u_seq < 10)
	{
		switch (utype)
		{
		case 1: unit = new Magician(u_seq + 1, name); break;
		case 2: unit = new Artist(u_seq + 1, name); break;
		case 3: unit = new Worker(u_seq + 1, name); break;
		}
	}
	if (unit)
	{
		(*units)[u_seq] = unit;
		u_seq++;
	}
	return unit;
}

UnitFactory::~UnitFactory()
{
	for (int i = 0; i < u_seq; i++)
	{
		delete (*units)[i];
	}
	delete units;
}