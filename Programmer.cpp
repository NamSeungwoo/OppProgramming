#include "Programmer.h"

Programmer::Programmer(void)
{

}

Programmer::~Programmer(void)
{

}

void Programmer::Programming()
{
	cout << "생각하면서 코딩을 한다." << endl;
}

void Programmer::Programming(int tcnt)
{
	cout << tcnt << "시간 생각하면서 코딩을 한다." << endl;
}
