#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
	string title;
	string memo;
public:
	Book(string _title);
	void SetMemo(string _memo);
	void View();
};