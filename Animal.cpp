#include "Animal.h"
Animal::Animal(void)
{
	cout << "Animal ������" << endl;
	head = new Head();
}
Animal::~Animal(void)
{
	delete head;
	cout << "Animal �Ҹ���" << endl;
}