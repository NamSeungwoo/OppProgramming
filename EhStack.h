#pragma once

#include "IntArr.h"
class EhStack : private IntArr
{
public:
	bool Push(int val);
	int Pop();
	bool IsFull() const;
	bool IsEmpty() const;
};