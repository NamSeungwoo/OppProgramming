#pragma once
template <typename T>
class Arr
{
	T *base;
	const int bsize;
public:
	
	Arr(int _bsize) :bsize(_bsize)
	{
		base = new T[bsize];
		for (int i = 0; i < bsize; i++)
		{
			base[i] = 0;
		}
	}
	~Arr()
	{
		delete[] base;
	}
	T &operator[] (int index)
	{
		if ((index >= 0) && (index < bsize))
		{
			return base[index];
		}
		throw "잘못된 인덱스를 사용하였습니다.";
	}
};
