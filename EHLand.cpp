#include "EHLand.h"

void EHLand::ReplaceUnit(Unit *unit)
{
	throw "EHLand::ReplaceUnit을 구현하지 않았음";
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

EHLand::EHLand()
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

void EHLand::Run()
{
	throw "EHLand::Run을 구현하지 않았음";
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
	throw "EHLand::MakeUnit을 구현하지 않았음";
}

void EHLand::MoveFocus()
{
	throw "EHLand::MoveFocus를 구현하지 않았음";
}

void EHLand::MoveUnit()
{
	throw "EHLand::MoveUnit을 구현하지 않았음";
}

void EHLand::ViewState()
{
	throw "EHLand::ViewState를 구현하지 않았음";
}

