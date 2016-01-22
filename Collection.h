#pragma once
#include "Member.h"
class Compare
{
public: virtual int operator()(Member *mem1, Member *mem2) = 0;
};

class DoSomething
{
public: virtual void operator()(Member *mem1) = 0;
};

class Search
{
public: virtual bool operator()(Member *mem1) = 0;
};

class Collection
{
	Member **base;
	const int max_capacity;
	int nsize;
public:
	Collection(int _max_capacity);
	~Collection(void);
	Member *FindMember(Search &search, int index=0);
	Member *GetMember(Search &search, int index=0);
	int GetCount() const;
	int GetCapacity() const;
	void ListAll(DoSomething &doit);
	bool Push(Member *member);
	void Sort(Compare &compare);
	bool IsFull() const;
private:
	void Erase(int index);
};