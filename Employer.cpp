#include "Employer.h"

Employer::Employer(void)
{

}

Employer::~Employer(void)
{

}

void Employer::CommandJob(Employee *employee)
{
	cout << "일을 지시하다." << endl;
	employee->Dojob();
}