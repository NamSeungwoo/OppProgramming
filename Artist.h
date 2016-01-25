#pragma once
#include "Unit.h"
class Artist : public Unit
{
private:
	friend class UnitFactory;
	Artist(int seq, string name);
	~Artist();
public:
	void Criticism();
	void Sleep();
	void Relax();
};