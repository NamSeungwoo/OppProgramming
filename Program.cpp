#include "Stu.h"

int main()
{
	Stu *p = new Stu("Nam");
	Stu *p2 = new Stu("Kim");

	p->Dance();
	p->View();

	p2->Study();
	p2->Study();
	p2->View();

	delete p;
	

}