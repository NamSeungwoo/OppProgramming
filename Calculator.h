#pragma once

class Calculator
{
public:
	enum CmdType { ADD, SUB, MUL, DIV };
	int operator()(int a, int b, CmdType ctype);
private:
	int Add(int a, int b);
	int Sub(int a, int b);
	int Mul(int a, int b);
	int Div(int a, int b);
};
