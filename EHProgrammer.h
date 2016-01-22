#pragma once
#include "Programmer.h"
#include <string>
class EHProgrammer : public Programmer
{
public:
	EHProgrammer(void);
	~EHProgrammer(void);
	void Programming(int tcnt);

};