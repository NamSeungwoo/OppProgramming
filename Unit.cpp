#include "Unit.h"

Unit::Unit(int _seq, string _name) :seq(_seq), name(_name)
{
	
}

Unit::~Unit()
{
	//throw "Unit::~Unit�� �������� �ʾ���";
}

int Unit::GetSeq() const
{
	return seq;
}

void Unit::View(ostream &os) const
{
	cout << "�Ϸù�ȣ:" << seq << " �̸�:" << name << endl;
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
	cout << "������ ���� �ູ��....." << endl;
}

void Unit::Introduce()
{
	cout << "���� ���뿡 �ö������ �Ұ��� ������." << endl;
	View();
}