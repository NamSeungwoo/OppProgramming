#include "Hall.h"

void Hall::SetFocus()
{
	throw "Hall::SetFocus�� �������� �ʾ���";
}

void Hall::View(ostream &os) const
{
	throw "Hall::View�� �������� �ʾ���";
}

Hall::Hall(ComeBackUnitEvent *cbu_eventhandler):Place(cbu_eventhandler)
{
	throw "Hall::Hall�� �������� �ʾ���";

}