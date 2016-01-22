#include "Collection.h"
// ��ȣ�� �˻� �ÿ� ����� Ŭ���� ����
class SearchByNumFun :public Search
{
	int num;
public:
	SearchByNumFun(int _num) :num(_num) {}
	virtual bool operator()(Member *mem)
	{
		return mem->GetNum() == num;
	}
};

//�̸����� �˻� �ÿ� ����� Ŭ���� ����
class SearchByNameFun : public Search
{
	string name;
public:
	SearchByNameFun(string _name) :name(_name) {}
	virtual bool operator()(Member *mem)
	{
		return mem->GetName() == name;
	}
};

// ��ȣ ������ ���� �ÿ� ���� ����� ���ϱ� ���� �����ϴ� Ŭ���� ����
class CompareByNumFun :public Compare
{
public:
	virtual int operator()(Member *mem1, Member *mem2)
	{
		return mem1->GetNum() - mem2->GetNum();
	}
};

//�̸� ������ ���� �ÿ� ���� ����� ���ϱ� ���� �����ϴ� Ŭ���� ����
class CompareByNameFun :public Compare
{
public:
	virtual int operator()(Member *mem1, Member *mem2)
	{
		string n1 = mem1->GetName();
		string n2 = mem2->GetName();
		return strcmp(n1.c_str(), n2.c_str());
	}
};

// ��ü ȸ���� ������ ���������� �����ֱ� ���� ���� ����� �����ֱ� ���� �����ϴ� Ŭ���� ����
class ViewMember : public DoSomething
{
public:
	virtual void operator()(Member *mem)
	{
		cout << mem;
	}
};

// ��ü ȸ���� ����ȭ �ϱ� ���� ���� ����� �����ϱ� ���� �����ϴ� Ŭ����
class DeleteMember : public DoSomething
{
public:
	virtual void operator()(Member *mem)
	{
		delete mem;
	}
};

Collection::Collection(int _max_capacity) :max_capacity(_max_capacity), nsize(0)
{
	base = new Member*[max_capacity];
}

Collection::~Collection(void)
{
	delete[] base;
}

Member *Collection::FindMember(Search &search, int index)
{
	for (int i = 0; i < nsize; i++)
	{
		if (search(base[i]))
		{
			return base[i];
		}
	}
	return 0;
}

Member *Collection::GetMember(Search &search, int index)
{
	Member *re = 0;
	for (int i = 0; i < nsize; i++)
	{
		if (search(base[i]))
		{
			re = base[i];
			Erase(i);
			break;
		}
	}
	return re;
}

bool Collection::Push(Member *member)
{
	if (IsFull())
	{
		return false;
	}
	base[nsize] = member;
	nsize++;
	return true;
}

void Collection::ListAll(DoSomething &doit)
{
	for (int i = 0; i < nsize; i++)
	{
		doit(base[i]);
	}
}

void Collection::Sort(Compare &compare)
{
	Member *temp = 0;
	for (int i = 0; i < nsize; i++)
	{
		for (int j = i + 1; j < nsize; j++)
		{
			if (compare(base[i], base[j]) > 0)
			{
				temp = base[i];
				base[i] = base[j];
				base[j] = temp;
			}
		}
	}
}

void Collection::Erase(int index)
{
	int nsize_minus_one = nsize - 1;
	for (int i = index; i < nsize_minus_one; i++)
	{
		base[i] = base[i + 1];
	}
	nsize = nsize_minus_one;
}

int Collection::GetCount() const
{
	return nsize;
}

int Collection::GetCapacity() const
{
	return max_capacity;
}
bool Collection::IsFull() const
{
	return max_capacity == nsize;
}