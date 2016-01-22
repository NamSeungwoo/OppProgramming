#pragma once
/*template <typename T>
class MyTemplate
{
	T data;
public:
	MyTemplate(T _data)
	{
		data = _data;
	}
	int Compare(T in)
	{
		return data - in;
	}
	operator T()
	{
		return data;
	}
};*/

template <typename T>
class MyTemplate
{
	T data;
public:
	MyTemplate(T _data);
	int Compare(T in);
	operator T();
};

template <typename T>
MyTemplate<T>::MyTemplate(T _data)
{
	data = _data;
}

template <typename T>
int MyTemplate<T>::Compare(T in)
{
	return data - in;
}

template <typename T>
MyTemplate<T>::operator T()
{
	return data;
}