#pragma once
#include <iostream>
using namespace std;

template <typename T>

void Foo(T t)
{
	cout << typeid(Foo<T>).name() << endl;
}