#pragma once
#include "Musician.h"

class Pianist : public Musician
{
public:
	Pianist(int _mnum);
	~Pianist();
	void Play();
	void Tuning();
};