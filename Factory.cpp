#include "Factory.h"

Factory::Factory(void)
{
	cout << "공장 생성자 메서드" << endl;
	sellcnt = 0;
}

Factory::~Factory(void)
{
	cout << "공장 소멸자 메서드" << endl;
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