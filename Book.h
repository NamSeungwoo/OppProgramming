#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
	string name;
public:
	Book(string _name);
	~Book(void);
	void View() const;
};