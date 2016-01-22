#include "Orchestra.h"

Orchestra::Orchestra(int _max_members) :max_members(_max_members)
{
	InitializeOrchestra();
}

Orchestra::~Orchestra(void)
{

}

void Orchestra::InitializeOrchestra()
{
	members = new Musician*[max_members];
	now_members = 0;
}

bool Orchestra::JoinMember(Musician *musician)
{
	if (now_members < max_members)
	{
		members[now_members] = musician;
		now_members++;

		return true;
	}
	return false;
}

void Orchestra::Greeting() const
{
	cout << "�ִ� �ܿ���:" << max_members << " ���� �ܿ���:" << now_members << endl;
	for (int i = 0; i < now_members; i++)
	{
		members[i]->Greeting();
	}
}