#include <iostream>
using namespace std;

class Exp
{
	int base;
	int exp;
public:
	Exp();
	Exp(int a);
	Exp(int a, int b);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp a);
};
