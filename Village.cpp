#include "Village.h"
Village::Village(ComeBackUnitEvent *cbu_eventhandler) :Place(cbu_eventhandler)
{
	throw "Village:Village�� �������� �ʾ���";
}
void Village::SetFocus()
{
	throw "Village::SetFocus�� �������� �ʾ���";
}
void Village::View(ostream &os) const
{
	throw "Village::View�� �������� �ʾ���";
}