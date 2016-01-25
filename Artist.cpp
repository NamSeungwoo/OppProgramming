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
	cout << "이번 공연은 이렇고 저렇고....." << endl;
}

void Artist::Sleep()
{
	View();
	cout << "노래는 즐겁다...." << endl;
}

void Artist::Relax()
{
	View();
	cout << "비발디의 사계 .... " << endl;
}