#include "Magician.h"

Magician::Magician(int seq, string name) :Unit(seq, name)
{
	
}
Magician::~Magician()
{
	
}
void Magician::ViewConcert()
{
	Unit::ViewConcert();
	cout << "¸ÅÁ÷ ¾ÆÀÌ...." << endl;
}

void Magician::Sleep()
{
	View();
	cout << "²Þ¼ÓÀ¸·Î...." << endl;
}

void Magician::Relax()
{
	View();
	cout << "¶ö¶ö¶ó... ´í½º! ´í½º!" << endl;
}

void Magician::TravelMoon()
{
	View();
	cout << "¿©±â´Â °í¿äÀÇ ¹Ù´Ù" << endl;
}