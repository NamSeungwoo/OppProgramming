#pragma once
#include "Employee.h"

class Employer {
public:
	Employer(void);
	~Employer(void);
	void CommandJob(Employee *employee);
};