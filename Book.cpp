#include "Book.h"

Book::Book(string _name)
{
	name = _name;
}

Book::~Book(void)
{

}

void Book::View() const
{
	cout << "µµΌ­Έν:" << name << endl;
}