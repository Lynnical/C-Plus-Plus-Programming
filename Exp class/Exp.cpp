#include "Exp.h"

Exp::Exp()
{
	base = 1;
	exp = 1;
}

Exp::Exp(int a)
{
	base = a;
	exp = 1;
}

Exp::Exp(int a, int b)
{
	base = a;
	exp = b;
}

int Exp::getValue()
{
	int value = 1;
	for (int i = 0; i < exp; i++)
	{
		value = base * value;
	}
	return value;
}

int Exp::getBase()
{
	return base;
}

int Exp::getExp()
{
	return exp;
}

bool Exp::equals(Exp a)
{
	if (getValue() == a.getValue())
		return true;
	else
		return false;
}