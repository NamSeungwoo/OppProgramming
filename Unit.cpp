#include "Unit.h"

Unit::Unit(int _seq, string _name) :seq(_seq), name(_name)
{
	
}

Unit::~Unit()
{
	//throw "Unit::~Unit을 구현하지 않았음";
}

int Unit::GetSeq() const
{
	return seq;
}

void Unit::View(ostream &os) const
{
	cout << "일련번호:" << seq << " 이름:" << name << endl;
}

string Unit::GetName() const
{
	return name;
}

ostream &operator << (ostream &os, const Unit *unit)
{
	unit->View(os);
	return os;
}

void Unit::ViewConcert()
{
	View();
	cout << "공연을 보니 행복해....." << endl;
}

void Unit::Introduce()
{
	cout << "제가 무대에 올라왔으니 소개를 하지요." << endl;
	View();
}