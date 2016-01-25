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
	int utype = 0;
	cout << "������ ���� ������ �Է��ϼ���. [1]:������ [2]:������ [3]:ȸ���" << endl;
	utype = MyGlobal::GetNum();
	if ((utype >= 1) && (utype <= 3))
	{
		cout << "������ ������ �̸��� �Է��ϼ���." << endl;
		string name = MyGlobal::GetStr();
		Unit *unit = unitfactory->MakeUnit(utype, name);
		ReplaceUnit(unit);
	}
	else
	{
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}
}

void EHLand::MoveFocus()
{
	cout << "���� �̵� �޴��Դϴ�." << endl;
	Place *place = SelectPlace();
	if (place)
	{
		place->SetFocus();
	}
	else
	{
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}
}

Place *EHLand::SelectPlace()
{
	int pnum = 0;
	cout << "��Ҹ� �����ϼ���. [1]:������ [2]:�ְ���" << endl;
	pnum = MyGlobal::GetNum();
	if ((pnum >= 1) && (pnum <= 2))
	{
		return places[pnum - 1];
	}
	return 0;
}
void EHLand::MoveUnit()
{
	cout << "�̵��� ������ �������ּ���" << endl;
	Unit *unit = SelectUnit();
	if (unit != 0)
	{
		cout << "�̵��� ��Ҹ� �������ּ���" << endl;
		Place *place = SelectPlace();
		if (place != 0)
		{
			place->InsertUnit(unit);
			Remove(unit);
		}
		else
		{
			cout << "��Ҹ� �߸� �����Ͽ����ϴ�." << endl;
		}
	}
	else
	{
		cout << "������ �߸� �����Ͽ����ϴ�." << endl;
	}
}

Unit *EHLand::SelectUnit()
{
	ViewUnits();
	cout << "������ �Ϸù�ȣ�� �Է����ּ���" << endl;
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