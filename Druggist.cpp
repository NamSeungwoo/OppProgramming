#include "Druggist.h"
#include "Doctor.h"

Druggist::Druggist(void)
{

}

Druggist::~Druggist(void)
{

}

void Druggist::Hasty(Doctor *doc)
{
	Hasty();
	doc->Treatment();
}

void Druggist::Hasty()
{
	cout << "조재하다." << endl;
}