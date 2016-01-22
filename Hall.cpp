#include "Hall.h"

void Hall::SetFocus()
{
	throw "Hall::SetFocus를 구현하지 않았음";
}

void Hall::View(ostream &os) const
{
	throw "Hall::View를 구현하지 않았음";
}

Hall::Hall(ComeBackUnitEvent *cbu_eventhandler):Place(cbu_eventhandler)
{
	throw "Hall::Hall를 구현하지 않았음";

}