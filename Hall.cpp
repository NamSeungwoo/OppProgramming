#include "Hall.h"

void Hall::SetFocus()
{
	MyGlobal::KeyData key = MyGlobal::ESC;
	while ((key = SelectMenu()) != MyGlobal::ESC)
	{
		switch (key)
		{
		case MyGlobal::F1: ViewConcert(); break;
		case MyGlobal::F2: GoOnStage(); break;
		case MyGlobal::F3: ComeBackUnit(); break;
		default: cout << "�߸��� �޴��� �����Ͽ����ϴ�." << endl;
		}
		cout << "�ƹ�Ű�� ��������" << endl;
		MyGlobal::GetKey();
	}
}

MyGlobal::KeyData Hall::SelectMenu()
{
	system("cls");
	cout << "Hall �޴� [ESC]:EHLand�� ���� ����" << endl;
	cout << "[F1]:�������� [F2]:����� �ö󰡱� [F3]:EHLand�� ���� ����" << endl;
	cout << "�޴��� �����ϼ���" << endl;
	return MyGlobal::GetKey();
}

void Hall::View(ostream &os) const
{
	cout << "������" << endl;
	Place::View(os);
	
}

Hall::Hall(ComeBackUnitEvent *cbu_eventhandler):Place(cbu_eventhandler)
{
	//throw "Hall::Hall�� �������� �ʾ���";

}

void Hall::ViewConcert()
{
	IPlay *iplay = 0;
	Artist *artist = 0;
	for (int i = 0; i < 10; i++)
	{
		iplay = IndexAt(i, true);
		if (iplay)
		{
			iplay->ViewConcert();
			artist = dynamic_cast <Artist*> (iplay);
			if (artist)
			{
				artist->Criticism();
			}
		}
	}
}

void Hall::GoOnStage()
{
	cout << "����� �ö� ������ �������ּ���" << endl;
	IPlay *iplay = SelectUnit(true);
	if (iplay)
	{
		iplay->Introduce();
	}
	else
	{
		cout << "�߸� �����Ͽ����ϴ�." << endl;
	}
}