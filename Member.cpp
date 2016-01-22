#include "Member.h"
Member::Member(int _num, string _name) :num(_num), name(_name) {}
int Member::GetNum() const { return num; }
string Member::GetName() const
{
	return name;
}
ostream &operator << (ostream &os, const Member &member)
{
	os << "��ȣ:" << member.GetNum() << endl;
	os << "�̸�:" << member.GetName() << endl;
	return os;
}
ostream &operator << (ostream &os, const Member *member)
{
	return os << *member;
}