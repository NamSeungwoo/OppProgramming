#pragma once
#include "Unit.h"
class Magician : public Unit
{
private:
	friend class UnitFactory;
	Magician(int seq, string name);
	~Magician();
public:
	void ViewConcert();
	void Sleep();
	void Relax();
	void TravelMoon();
};
