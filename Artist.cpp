#include "Artist.h"

Artist::Artist(int seq, string name) :Unit(seq, name)
{
	throw "Artist::Artist�� �������� �ʾ���";
}
Artist::~Artist()
{
	throw "Artist::~Artist�� �������� �ʾ���";
}
void Artist::Criticism()
{
	throw "Artist::Criticism�� �������� �ʾ���";
}

void Artist::Sleep()
{
	throw "Magician::Sleep�� �������� �ʾ���";
}

void Artist::Relax()
{
	throw "Artist::Relax�� �������� �ʾ���";
}