#include "Employer.h"

Employer::Employer(void)
{

}

Employer::~Employer(void)
{

}

void Employer::CommandJob(Employee *employee)
{
	cout << "���� �����ϴ�." << endl;
	employee->Dojob();
}