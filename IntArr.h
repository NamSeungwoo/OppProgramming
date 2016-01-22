#pragma once
#define INTAR 0
class IntArr
{
	int *base;
	const int capa;
public:
	IntArr(int _capa);
	~IntArr(void);
	int &operator[](int index);
private:
	void Initialize();
	bool AvailIndex(int index);
};