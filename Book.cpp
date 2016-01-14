#include "Book.h"
Book::Book(string _title)
{
	title = _title;
	memo = "";
}

void Book::SetMemo(string _memo)
{
	memo = _memo;
}

void Book::View()
{
	cout << "제목:" << title << " 메모:" << memo << endl;
}