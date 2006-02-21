#include<iostream>
#include"Fraction.h"

using namespace std;

int main()
{

	Fraction a(3,9);
	Fraction b(4,13);
	Fraction c(1,12);
	Fraction d(5,20);
	
	a=a.subtract(d);
	b=b.Multiply(d);
	c=c.Divide(d);
	b=b.Add(d);

	a.print();
	b.print();
	c.print();
	d.print();

	system("PAUSE");
	
	return 0;
}