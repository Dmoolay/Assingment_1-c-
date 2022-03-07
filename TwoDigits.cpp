/* Assignment: 1
Author: DOR MOOLAY, ID: 205870637
Author: SNIR MOSCOVICH, ID: 206293128
*/
#include <iostream>
#include "TwoDigits.h"
using namespace std;

TwoDigits::TwoDigits()
{
	this->digit = '0';
	this->dozen = '0';
}

TwoDigits::TwoDigits(int num)
{
	int a = num / 10;
	int b = num % 10;
	this->dozen = a + 48;
	this->digit = b + 48;
}

TwoDigits::TwoDigits(char a, char b)
{
	this->dozen = a;
	this->digit = b;
}

TwoDigits::~TwoDigits() {
	//cout << "Deleting a number...\n";
}
int TwoDigits::value()
{
	int a = this->digit - 48;
	int b = 10 * (this->dozen - 48);
	return a+b;
}
void TwoDigits::update(int num)
{
	int a = num / 10;
	int b = num % 10;
	this->dozen = a + 48;
	this->digit = b + 48;
}
void TwoDigits::printValue()
{
	if (this->dozen == '0')
	{
		cout << this->digit << endl;
	}
	else
	{
		cout << this->dozen << this->digit << endl;
	}
}
