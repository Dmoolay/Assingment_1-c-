#pragma once
#include <iostream>
using namespace std;
//#ifndef HW3_C___HEAD_H
#define HW3_C___HEAD_H

class String
{
private:
	char str[10]; 
	int checkIndex(int);
public:
	String();
	String(char*);
	~String();
	void updateValue(char*);
	bool setCharAt(char, int);
	bool setCharsByUser();
	char getCharAt(int);
	void printValue();
	void printValue(bool);
	//void setc();
};

//#endif HW3_C___HEAD_H
