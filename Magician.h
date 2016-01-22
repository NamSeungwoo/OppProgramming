#pragma once
#include "Unit.h"
class Magician : public Unit
{
private:
	friend class UnitFactory;
	Magician(int seq, string name);
	~Magician();
	void ViewConcert();
	void Sleep();
	void Relax();
	void TravelMoon();
};
