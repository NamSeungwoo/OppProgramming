#pragma once

#include "Instrument.h"

class Musician
{
	string name;
	Instrument *instrument;
public:
	int num;
	Musician();
	Musician(int _num, string _name, Instrument* _instrument);
	virtual ~Musician(void);
	Musician &operator =(const Musician &mu);
	void View();
	int Getnum() const;
	void Setnum(int a);
};