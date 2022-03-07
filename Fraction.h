#pragma once
#include <iostream>
using namespace std;
//#ifndef HW3_C___HEAD_H
//#define HW3_C___HEAD_H

class Fraction
{
private:
	int mone;
	int mehane;
public:
	void set_mone(int a)
	{
		mone = a;
	}
	void set_mehane(int b)
	{
		mehane = b;
	}

	int get_mone()
	{
		return mone;
	}
	int get_mehane()
	{
		return mehane;
	}
	Fraction();
	Fraction(int, int);
	~Fraction();
	float value();
	void updateNumerator(int);
	void updateDenominator(int);
	void printValue();

};

//#endif HW3_C___HEAD_H

