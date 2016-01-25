#include "Village.h"
Village::Village(ComeBackUnitEvent *cbu_eventhandler) :Place(cbu_eventhandler)
{
	//throw "Village:Village�� �������� �ʾ���";
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
		default: cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
		}
		cout << "�ƹ�Ű�� ��������" << endl;
		MyGlobal::GetKey();
	}
}
MyGlobal::KeyData Village::SelectMenu()
{
	system("cls");
	cout << "Village �޴� [ESC]:EHLand�� ���� ����" << endl;
	cout << "[F1]:�ҵ� [F2]:�޽� [F3]:EHLand�� ���� ����" << endl;
	cout << "�޴��� �����ϼ���" << endl;
	return MyGlobal::GetKey();
}
void Village::View(ostream &os) const
{
	cout << "����" << endl;
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
	cout << "�޽��� ������ �������ּ���" << endl;
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
		cout << "�߸� �����Ͽ����ϴ�." << endl;
	}
}