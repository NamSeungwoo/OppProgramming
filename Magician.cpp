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
	cout << "���� ����...." << endl;
}

void Magician::Sleep()
{
	View();
	cout << "�޼�����...." << endl;
}

void Magician::Relax()
{
	View();
	cout << "������... ��! ��!" << endl;
}

void Magician::TravelMoon()
{
	View();
	cout << "����� ����� �ٴ�" << endl;
}