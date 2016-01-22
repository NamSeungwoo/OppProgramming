#include "Artist.h"

Artist::Artist(int seq, string name) :Unit(seq, name)
{
	throw "Artist::Artist을 구현하지 않았음";
}
Artist::~Artist()
{
	throw "Artist::~Artist을 구현하지 않았음";
}
void Artist::Criticism()
{
	throw "Artist::Criticism을 구현하지 않았음";
}

void Artist::Sleep()
{
	throw "Magician::Sleep을 구현하지 않았음";
}

void Artist::Relax()
{
	throw "Artist::Relax를 구현하지 않았음";
}