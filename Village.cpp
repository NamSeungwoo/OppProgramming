#include "Village.h"
Village::Village(ComeBackUnitEvent *cbu_eventhandler) :Place(cbu_eventhandler)
{
	//throw "Village:Village를 구현하지 않았음";
}
void Village::SetFocus()
{
	MyGlobal::KeyData key = MyGlobal::ESC;
	while ((key = SelectMenu()) != MyGlobal::ESC)
	{
		switch (key)
		{
		case MyGlobal::F1: TurnOff(); break;
		case MyGlobal::F2: Relax(); break;
		case MyGlobal::F3: ComeBackUnit(); break;
		default: cout << "잘못된 메뉴를 선택하였습니다." << endl;
		}
		cout << "아무키나 누르세요" << endl;
		MyGlobal::GetKey();
	}
}
MyGlobal::KeyData Village::SelectMenu()
{
	system("cls");
	cout << "Village 메뉴 [ESC]:EHLand로 초점 복귀" << endl;
	cout << "[F1]:소등 [F2]:휴식 [F3]:EHLand로 유닛 복귀" << endl;
	cout << "메뉴를 선택하세요" << endl;
	return MyGlobal::GetKey();
}
void Village::View(ostream &os) const
{
	cout << "마을" << endl;
	Place::View(os);
}

void Village::TurnOff()
{
	IRelax *irelax = 0;
	Worker *worker = 0;

	for (int i = 0; i < 10; i++)
	{
		irelax = IndexAt(i, 0);
		if (irelax)
		{
			worker = dynamic_cast<Worker *>(irelax);
			if (worker)
			{
				worker->SetAlarm();
			}
			irelax->Sleep();
		}
	}
}

void Village::Relax()
{
	cout << "휴식할 유닛을 선택해주세요" << endl;
	IRelax *irelax = SelectUnit(0);
	if (irelax)
	{
		irelax->Relax();
		Magician *magician = dynamic_cast<Magician *>(irelax);
		if (magician)
		{
			magician->TravelMoon();
		}
	}
	else
	{
		cout << "잘못 선택하였습니다." << endl;
	}
}