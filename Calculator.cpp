#include "Calculator.h"
int Calculator::operator()(int a, int b, CmdType ctype)
{
	switch (ctype)
	{
	case ADD: return Add(a, b);
	case SUB: return Sub(a, b);
	case MUL: return Mul(a, b);
	case DIV: return Div(a, b);
	}
	return 0;
}

int Calculator::Add(int a, int b)
{
	return a + b;
}
int Calculator::Sub(int a, int b)
{
	return a - b;
}
int Calculator::Mul(int a, int b)
{
	return a*b;
}
int Calculator::Div(int a, int b)
{
	if (b)
	{
		return a / b;
	}
	throw "젯수가 0일 수 없습니다.";
}
