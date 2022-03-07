#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction()
{
	this->mone = 0;
	this->mehane = 1;
}

Fraction::Fraction(int a, int b)
{
	if (b == 0)
	{
		this->mone = 0;
		this->mehane = 1;
	}
	else
	{
		this->mone = a;
		this->mehane = b;
	}
}

Fraction::~Fraction() {
	//cout << "Deleting a number...\n";
}

float Fraction::value()
{
	float a = ((float)this->mone) / ((float)this->mehane);
	return a;
}

void Fraction::updateNumerator(int a)
{
	this->mone = a;
}

void Fraction::updateDenominator(int a)
{
	if (a == 0)
	{
		this->mone = 0;
		this->mehane = 1;
	}
	else
	{
		this->mehane = a;
	}
}

void Fraction::printValue()
{
	cout << this->mone << '/' << this->mehane << endl;
}
