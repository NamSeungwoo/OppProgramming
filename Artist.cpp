#include "Artist.h"

Artist::Artist(int seq, string name) :Unit(seq, name)
{
	
}
Artist::~Artist()
{
	
}
void Artist::Criticism()
{
	cout << this << endl;
	cout << "�̹� ������ �̷��� ������....." << endl;
}

void Artist::Sleep()
{
	View();
	cout << "�뷡�� ��̴�...." << endl;
}

void Artist::Relax()
{
	View();
	cout << "��ߵ��� ��� .... " << endl;
}