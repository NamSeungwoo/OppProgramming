#include "Place.h"

Place::Place(ComeBackUnitEvent *cbu_eventhandler)
{
	this->cbu_eventhandler = cbu_eventhandler;
	units = new Arr<Unit *>(10);
}
void Place::InsertUnit(Unit *unit)
{
	for (int i = 0; i < 10; i++)
	{
		if ((*units)[i] == 0)
		{
			(*units)[i] = unit;
			break;
		}
	}
}

void Place::View(ostream &os) const
{
	for (int i = 0; i < 10; i++)
	{
		if ((*units)[i])
		{
			cout << (*units)[i] << endl;
		}
	}
}

ostream &operator <<(ostream &os, const Place *place)
{

	place->View(os);
	return os;
}



IPlay *Place::IndexAt(int index, bool) const
{
	return IndexAt(index);
}

IRelax *Place::IndexAt(int index, int) const
{
	return IndexAt(index);
}

IPlay *Place::SelectUnit(bool) const
{
	return SelectUnit();
}

IRelax *Place::SelectUnit(int) const
{
	return SelectUnit();
}

Unit *Place::IndexAt(int index) const
{
	if ((index >= 0) && (index < 10))
	{
		if ((*units)[index])
		{
			return (*units)[index];
		}
	}
	return 0;
}

Unit *Place::SelectUnit() const
{
	View();
	cout << "유닛의 이름을 입력하세요" << endl;
	string name = MyGlobal::GetStr();

	Unit *unit = 0;
	for (int index = 0; index < 10; index++)
	{
		unit = (*units)[index];
		if (unit)
		{
			if (unit->GetName() == name)
			{
				return (*units)[index];
			}
		}
	}
	return 0;
}

void Place::ComeBackUnit()
{
	cout << "EHLand로 복귀할 유닛을 선택해주세요" << endl;
	Unit *unit = SelectUnit();
	if (unit)
	{
		(*cbu_eventhandler)(unit);
		Remove(unit);
	}
	else
	{
		cout << "잘못 선택하였습니다." << endl;
	}
}

void Place::Remove(Unit *unit)
{
	for (int i = 0; i < 10; i++)
	{
		if ((*units)[i] == unit)
		{
			(*units)[i] = 0;
			return;
		}
	}
}
