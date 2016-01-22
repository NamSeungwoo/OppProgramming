#include "Doctor.h"
#include "Druggist.h"

Doctor::Doctor(void)
{

}

Doctor::~Doctor(void)
{

}

void Doctor::Treatment(Druggist *dru)
{
	Treatment();
	dru->Hasty();
}

void Doctor::Treatment()
{
	cout << "치료하다." << endl;
}