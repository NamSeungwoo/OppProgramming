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
	cout << "번호:" << num << "이름:" << name << endl;
	cout << instrument->GetName() << "를 연주합니다" << endl;
}

Musician &Musician::operator=(const Musician &mu)
{
	cout << "대입 연산자가 호출되었음" << endl;
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