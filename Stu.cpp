#include "Stu.h"

int Stu::last_num=0;

Stu::Stu(string _name):num(++last_num)
{
	this->hp = 50;
	this->iq = 100;
	this->scnt = 0;
	this->stress = 0;
	this->name = _name;

}
Stu::~Stu()
{

}
void Stu::Dance() {
	iq += 3;
	hp -= 30;
	stress -= 20;
	scnt = 0;

	if (iq > 100)
		iq = 100;
	if (hp < 0)
		hp = 0;
	if (stress < 0)
		stress = 0;
}
void Stu::Drink() {
	iq -= 4;
	hp -= 20;
	stress -= 10;
	scnt = 0;

	if (iq < 0)
		iq = 0;
	if (hp < 0)
		hp = 0;
	if (stress < 0)
		stress = 0;
}
string Stu::GetName() const {
	return name;
}
int Stu::GetNum() const {
	return num;
}
void Stu::ListenLecture() {
	iq += scnt;
	hp -= 10;
	stress += (20 - scnt * 5);
	scnt = 0;

	if (iq > 100)
		iq = 100;
	if (hp < 0)
		hp = 0;
	if (stress > 100)
		stress = 100;
}
void Stu::Relax() {

	hp += 30;
	stress -= 20;
	scnt = 0;
	if (hp > 100)
		hp = 100;
	if (stress < 0)
		stress = 0;
}
void Stu::Sleep() {
	hp += 50;
	stress -= 50;
	scnt = 0;

	if (hp > 100)
		hp = 100;
	if (stress < 0)
		stress = 0;
}

void Stu::Study() {
	iq += (5 - scnt);
	hp -= 5;
	stress += 10;
	scnt += 1;

	if (iq > 100)
		iq = 100;
	if (hp < 0)
		hp = 0;
	if (stress > 100)
		stress = 100;
	if (scnt > 5)
		scnt = 5;
}
void Stu::View() const {
	
	cout << "num: " << num << endl;
	cout << "hp: " << hp << endl;
	cout << "iq: " << iq << endl;
	cout << "scnt: " << scnt << endl;
	cout << "stress: " << stress << endl;

}