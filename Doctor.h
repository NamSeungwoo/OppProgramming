#pragma once

#include <iostream>
using namespace std;

class Druggist;
class Doctor
{
public:
	Doctor(void);
	virtual ~Doctor(void);
	void Treatment(Druggist *dru);
	void Treatment();
};
