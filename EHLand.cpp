#include "EHLand.h"

void EHLand::ReplaceUnit(Unit *unit)
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

void EHLand::Start()
{
	EHLand *singleton = new EHLand();
	singleton->Run(); 
	delete singleton;
}

EHLand::EHLand()
{
	Init();
}

EHLand::~EHLand()
{
	Exit();
}

void EHLand::Init()
{
	unitfactory = new UnitFactory();
	comebackhelper = new ComeBackHelper(this);
	places[0] = new Hall(comebackhelper);
	places[1] = new Village(comebackhelper);
	units = new Arr<Unit *>(10);
}

void EHLand::Exit()
{
	delete unitfactory;
	delete comebackhelper;
	delete places[0];
	delete places[1];
	delete units;
}

void EHLand::Run()
{
	MyGlobal::KeyData key = MyGlobal::ESC;
	while ((key = SelectMenu()) != MyGlobal::ESC)
	{
		switch (key)
		{
		case MyGlobal::F1:MakeUnit(); break;
		case MyGlobal::F2:MoveFocus(); break;
		case MyGlobal::F3:MoveUnit(); break;
		case MyGlobal::F4:ViewState(); break;
		default: cout << "잘못된 메뉴를 선택하였습니다." << endl;
		}
		cout << "아무키나 누르세요" << endl;
		MyGlobal::GetKey();
	}
}

MyGlobal::KeyData EHLand::SelectMenu()
{
	system("cls");
	cout << "EHLand 메뉴 [ESC]:프로그램 종료" << endl;
	cout << "[F1]:유닛 생성 [F2]:초점 이동 [F3]:유닛 이동 [F4]:전체 상태 보기" << endl;
	cout << "메뉴를 선택하세요" << endl;
	return MyGlobal::GetKey();
}

void EHLand::MakeUnit()
{
	int utype = 0;
	cout << "생성할 유닛 종류를 입력하세요. [1]:마법사 [2]:예술가 [3]:회사원" << endl;
	utype = MyGlobal::GetNum();
	if ((utype >= 1) && (utype <= 3))
	{
		cout << "생성할 유닛의 이름을 입력하세요." << endl;
		string name = MyGlobal::GetStr();
		Unit *unit = unitfactory->MakeUnit(utype, name);
		ReplaceUnit(unit);
	}
	else
	{
		cout << "잘못 입력하셨습니다." << endl;
	}
}

void EHLand::MoveFocus()
{
	cout << "초점 이동 메뉴입니다." << endl;
	Place *place = SelectPlace();
	if (place)
	{
		place->SetFocus();
	}
	else
	{
		cout << "잘못 입력하셨습니다." << endl;
	}
}

Place *EHLand::SelectPlace()
{
	int pnum = 0;
	cout << "장소를 선택하세요. [1]:공연장 [2]:주거지" << endl;
	pnum = MyGlobal::GetNum();
	if ((pnum >= 1) && (pnum <= 2))
	{
		return places[pnum - 1];
	}
	return 0;
}
void EHLand::MoveUnit()
{
	cout << "이동할 유닛을 선택해주세요" << endl;
	Unit *unit = SelectUnit();
	if (unit != 0)
	{
		cout << "이동할 장소를 선택해주세요" << endl;
		Place *place = SelectPlace();
		if (place != 0)
		{
			place->InsertUnit(unit);
			Remove(unit);
		}
		else
		{
			cout << "장소를 잘못 선택하였습니다." << endl;
		}
	}
	else
	{
		cout << "유닛을 잘못 선택하였습니다." << endl;
	}
}

Unit *EHLand::SelectUnit()
{
	ViewUnits();
	cout << "유닛의 일련번호를 입력해주세요" << endl;
	int useq = MyGlobal::GetNum();
	return FindUnit(useq);
}

void EHLand::ViewUnits()
{
	for (int i = 0; i < 10; i++)
	{
		if ((*units)[i])
		{
			Unit *unit = (*units)[i];
			cout << unit << endl;
		}
	}
}

Unit *EHLand::FindUnit(int useq)
{
	for (int i = 0; i < 10; i++)
	{
		if ((*units)[i])
		{
			Unit *unit = (*units)[i];
			if (unit->GetSeq() == useq)
			{
				return unit;
			}
		}
	}
	return 0;
}

void EHLand::Remove(Unit *unit)
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

void EHLand::ViewState()
{
	ViewUnits();
	cout << places[0] << endl;
	cout << places[1] << endl;
}