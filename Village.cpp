#include "Village.h"
Village::Village(ComeBackUnitEvent *cbu_eventhandler) :Place(cbu_eventhandler)
{
	throw "Village:Village를 구현하지 않았음";
}
void Village::SetFocus()
{
	throw "Village::SetFocus를 구현하지 않았음";
}
void Village::View(ostream &os) const
{
	throw "Village::View를 구현하지 않았음";
}