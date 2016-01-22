#include "EHLand.h"

void EHLand::ReplaceUnit(Unit *unit)
{
	throw "EHLand::ReplaceUnit�� �������� �ʾ���";
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
	throw "EHLand::Run�� �������� �ʾ���";
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
		default: cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
		}
		cout << "�ƹ�Ű�� ��������" << endl;
		MyGlobal::GetKey();
	}
}

MyGlobal::KeyData EHLand::SelectMenu()
{
	system("cls");
	cout << "EHLand �޴� [ESC]:���α׷� ����" << endl;
	cout << "[F1]:���� ���� [F2]:���� �̵� [F3]:���� �̵� [F4]:��ü ���� ����" << endl;
	cout << "�޴��� �����ϼ���" << endl;
	return MyGlobal::GetKey();
}

void EHLand::MakeUnit()
{
	throw "EHLand::MakeUnit�� �������� �ʾ���";
}

void EHLand::MoveFocus()
{
	throw "EHLand::MoveFocus�� �������� �ʾ���";
}

void EHLand::MoveUnit()
{
	throw "EHLand::MoveUnit�� �������� �ʾ���";
}

void EHLand::ViewState()
{
	throw "EHLand::ViewState�� �������� �ʾ���";
}

