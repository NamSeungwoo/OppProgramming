#include "EHProgrammer.h"

EHProgrammer::EHProgrammer(void)
{

}

EHProgrammer::~EHProgrammer(void)
{

}

void EHProgrammer::Programming(int tcnt)
{
	cout << "생각을 하고 이를 문서화한다." << endl;
	Programmer::Programming(tcnt);
}