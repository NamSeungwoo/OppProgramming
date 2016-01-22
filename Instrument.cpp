#include "Instrument.h"

Instrument::Instrument(string _name)
{
	name = _name;
}

string Instrument::GetName() const
{
	return name;
}