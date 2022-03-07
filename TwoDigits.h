#pragma once
#include <iostream>
using namespace std;
#ifndef HW3_C___HEAD_H
#define HW3_C___HEAD_H

class TwoDigits {
	char digit;
	char dozen;
public:
	void set_digit(char a) 
	{
		digit = a;
	}
	void set_dozen(char b) 	{		dozen = b; 	}
	char get_digit()
	{
		return digit; 
	}
	char get_dozen()
	{
		return dozen;
	}
	TwoDigits();
	TwoDigits(int);
	TwoDigits(char, char);
	~TwoDigits();
	int value();
	void update(int);
	void printValue();
};




#endif HW3_C___HEAD_H
