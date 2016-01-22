#include "EhStack.h"

bool EhStack::Push(int val)
{
	return PushBack(val);
}

int EhStack::Pop()
{
	int val = GetBack();
	PopBack();
	return val;
}

bool EhStack::IsFull() const
{
	return IntArr::IsFull();
}

bool EhStack::IsEmpty() const
{
	return IntArr::IsEmpty();
}