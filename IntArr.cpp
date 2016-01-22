#include "IntArr.h"

IntArr::IntArr(int _capa) :capa(_capa)
{
	base = new int[capa];
	Initialize();
}
IntArr::~IntArr(void)
{
	delete[] base;
}
int &IntArr::operator[](int index)
{
	if (AvailIndex(index))
	{
		return base[index];
	}
	throw INTAR;
}
void IntArr::Initialize()
{
	for (int i = 0; i < capa; i++)
	{
		base[i] = 0;
	}
}
bool IntArr::AvailIndex(int index)
{
	return (index >= 0) && (index < capa);
}