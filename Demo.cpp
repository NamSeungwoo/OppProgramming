#include "Stu.h"

void main()
{
	Stu s1("ȫ�浿");
	s1.SetBook(new Book("Escort C++"));
	Stu s2(s1);
	s2.Study();
	s1.View();
}
