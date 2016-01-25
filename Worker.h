#pragma once
#include "Unit.h"
class Worker : public Unit
{
private:
	friend class UnitFactory;
	Worker(int seq, string name);
	~Worker();
public:
	void Sleep();
	void SetAlarm();
	void Relax();
};