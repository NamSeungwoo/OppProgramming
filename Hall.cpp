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
		default: cout << "잘못된 메뉴를 선택하였습니다." << endl;
		}
		cout << "아무키나 누르세요" << endl;
		MyGlobal::GetKey();
	}
}

MyGlobal::KeyData Hall::SelectMenu()
{
	system("cls");
	cout << "Hall 메뉴 [ESC]:EHLand로 초점 복귀" << endl;
	cout << "[F1]:공연보기 [F2]:무대로 올라가기 [F3]:EHLand로 유닛 복귀" << endl;
	cout << "메뉴를 선택하세요" << endl;
	return MyGlobal::GetKey();
}

void Hall::View(ostream &os) const
{
	cout << "공연장" << endl;
	Place::View(os);
	
}

Hall::Hall(ComeBackUnitEvent *cbu_eventhandler):Place(cbu_eventhandler)
{
	//throw "Hall::Hall를 구현하지 않았음";

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
	cout << "무대로 올라갈 유닛을 선택해주세요" << endl;
	IPlay *iplay = SelectUnit(true);
	if (iplay)
	{
		iplay->Introduce();
	}
	else
	{
		cout << "잘못 선택하였습니다." << endl;
	}
}