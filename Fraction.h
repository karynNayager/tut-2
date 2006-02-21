#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
	int numerator;
	int denominator;

	Fraction(int,int);
	Fraction();
	Fraction operator+ (Fraction);
	void print();
	Fraction Add(Fraction,Fraction);
	Fraction operator* (Fraction);
	Fraction Multiply(Fraction,Fraction);
	Fraction Add(Fraction y);
	Fraction subtract(Fraction X);
	Fraction operator/(Fraction);
	Fraction Divide(Fraction X,Fraction Y);
	Fraction Divide(Fraction X);
	void setNumDenom(int Denominator);
	void setNumNumerator(int Numerator);
	int getNumDenom();
	int getNumNumerator();
	Fraction operator-(Fraction);
	int gcd(int a,int b);
	Fraction Multiply(Fraction X);
};


#endif