#include<iostream>
#include<stdio.h>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(){
}

Fraction::Fraction(int N,int D){
	numerator=N;
	denominator=D;
}

void Fraction::setNumDenom(int Denominator)
{
	denominator=Denominator;
}

void Fraction::setNumNumerator(int Numerator)
{
	numerator=Numerator;
}

int Fraction::getNumDenom()
{
	return denominator;
}

int Fraction::getNumNumerator()
{
	return numerator;
}

Fraction Fraction::operator+(Fraction X){
	Fraction Result;
	Result.numerator=numerator*X.denominator + X.numerator*denominator;
	Result.denominator=X.denominator*denominator;

	return Result;
}


Fraction Fraction::operator*(Fraction X){
	Fraction Result;
	Result.numerator = numerator*X.numerator;
	Result.denominator = denominator*X.denominator;
	return Result;
}

Fraction Fraction::Multiply(Fraction z,Fraction y)
{
	return (z*y);
}

Fraction Fraction::operator-(Fraction X)
{
		Fraction Result;
		Result.numerator = numerator*X.denominator - denominator*X.numerator;
		Result.denominator = denominator*X.denominator;
		return Result;
}

Fraction Fraction::subtract(Fraction X)
{
		Fraction Result;
		Result.numerator = numerator*X.denominator - denominator*X.numerator;
		Result.denominator = denominator*X.denominator;
		return Result;
}

Fraction Fraction::Add(Fraction y,Fraction z)
{
	 return y+z;
}

Fraction Fraction::Add(Fraction y)
{
	Fraction result;
	result.numerator=(numerator*y.denominator )+ (y.numerator*denominator);
	result.denominator=y.denominator*denominator;
	return result;
}

void Fraction::print()
{
	int WholeNo=0;

	if(numerator/denominator >= 1)
	{
		WholeNo=numerator/denominator;
		numerator = numerator - denominator*WholeNo;
	}

	if(numerator/denominator <=-1)
	{
		numerator=abs(numerator);
		denominator=abs(denominator);
		
		WholeNo=numerator/denominator;
		numerator = numerator - denominator*WholeNo;
		WholeNo=WholeNo*-1;
	}


	int temp=numerator;
	numerator=numerator/gcd(numerator,denominator);
	denominator=denominator/gcd(temp,denominator);

	cout<<WholeNo<<" "<<numerator<<"/"<<denominator<<endl;
}

int Fraction::gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}



Fraction Fraction::operator/(Fraction X)
{
	Fraction Result;
	Result.numerator = (numerator)*X.denominator;
	Result.denominator= denominator*X.numerator;

	return Result;
}

Fraction Fraction::Divide(Fraction X,Fraction Y)
{
	return X/Y;
}

Fraction Fraction::Divide(Fraction X)
{
	Fraction Result;
	Result.numerator = (numerator)*X.denominator;
	Result.denominator= denominator*X.numerator;

	return Result;

}

Fraction Fraction::Multiply(Fraction X)
{
	Fraction Result;
	Result.numerator = numerator*X.numerator;
	Result.denominator = denominator*X.denominator;
	return Result;

}