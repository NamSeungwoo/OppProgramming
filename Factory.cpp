#include "Factory.h"

Factory::Factory(void)
{
	cout << "���� ������ �޼���" << endl;
	sellcnt = 0;
}

Factory::~Factory(void)
{
	cout << "���� �Ҹ��� �޼���" << endl;
	for (int i = 0; i < sellcnt; i++)
	{
		delete products[i];
	}
}

Product *Factory::Order()
{
	Product *product = new Product;
	products[sellcnt] = product;
	sellcnt++;
	return product;
}