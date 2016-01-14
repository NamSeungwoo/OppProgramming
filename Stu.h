#pragma once
#include <iostream>
using namespace std;

class Stu {
	int hp;
	int iq;
	static int last_num;
	string name;
	const int num;
	int scnt;
	int stress;
public:
	Stu(string _name);
	~Stu();
	void Dance();
	void Drink();
	string GetName() const;
	int GetNum() const;
	void ListenLecture();
	void Relax();
	void Sleep();
	void Study();
	void View() const;
};