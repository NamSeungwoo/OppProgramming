#include "Musician.h"

Musician::Musician(int _num, string _name, Instrument* _instrument)
{
	num = _num;
	name = _name;
	instrument = _instrument;
}

Musician::Musician(void)
{
	num = 0;
	name = "";
	instrument;
}
Musician::~Musician() 
{
	if (instrument)
	{
		delete instrument;
	}
}
void Musician::View()
{
	cout << "��ȣ:" << num << "�̸�:" << name << endl;
	cout << instrument->GetName() << "�� �����մϴ�" << endl;
}

Musician &Musician::operator=(const Musician &mu)
{
	cout << "���� �����ڰ� ȣ��Ǿ���" << endl;
	num = mu.num;
	name = mu.name;
	instrument = new Instrument(*(mu.instrument)); 
	return (*this);
}
int Musician::Getnum() const
{

	return num;
}
void Musician::Setnum(int a)
{
	num = a;
}