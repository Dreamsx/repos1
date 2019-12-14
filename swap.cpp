#include "swap.h"

void swap(int a, int b)
{
	int c = a;
	a = b;
	b = c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
