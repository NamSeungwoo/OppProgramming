#pragma once
#include <iostream>
#include <string>
using namespace std;

class Instrument
{
	string name;
public:
	Instrument(string _name);
	string GetName() const;
};