#pragma once

#include "Product.h"

#define MAX_PRODUCTS 10

class Factory
{
	Product *products[MAX_PRODUCTS];
	int sellcnt;
public:
	Factory(void);
	~Factory(void);
	Product *Order();
};