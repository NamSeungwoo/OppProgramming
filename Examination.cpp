#include "Examination.h"

Examination::Examination(int _difficult)
{
	difficult = _difficult;
}

Examination::~Examination(void)
{

}

int Examination::GetDifficult() const
{
	return difficult;
}