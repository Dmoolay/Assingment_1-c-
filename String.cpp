#include <iostream>
#include "String.h"
using namespace std;

String::String()
{
	this->str[0] = '\0';
}
String::String(char* a)
{
	int j = 0;
	for (int i = 0; i < 9 && a[i] != '\0'; i++)
	{
		this->str[i] = a[i];
		j++;
	}
	this->str[j + 1] = '\0';
}
String::~String() {
	//cout << "Deleting a string...\n";
}

void String::updateValue(char* a)
{
	int j = 0;
	for (int i = 0; i < 9 && a[i] != '\0'; i++)
	{
		this->str[i] = a[i];
		j++;
	}
	str[j + 1] = '\0';
	//while (j <= 9)
	//{
	//	this->str[j] = NULL;
	//}
}


int String::checkIndex(int num)
{
	if (num < 0 || num > 8)
	{
		return -1;
	}
	int i = 0;
	while (this->str[i] != '\0')
	{
		i++;
	}

	if (num > i)
	{
		return -1;
	}

	return i;
}


bool String::setCharAt(char a, int num)
{
	int i = checkIndex(num);

	if (i == -1)
		return false;

	if (num == i)
	{
		this->str[i] = a;
		this->str[i + 1] = '\0';
		return true;
	}
	else
	{
		this->str[num] = a;
		return true;
	}
}

bool String::setCharsByUser()
{
	bool flag = true;
	int i = 0, num;
	char str1[10];
	while (this->str[i] != NULL)
	{
		str1[i] = this->str[i];
		i++;
	}
	cout << "how many changes do you want to make?" << endl;
	cin >> num;
	if (num <= 0 || isdigit(num) == true)
	{
		cout << "invalid input" << endl;
		return false;
	}
	else
	{
		char aa;
		int idx;
		for (int j = 0; j < num; j++)
		{
			cout << "insert char" << endl;
			cin >> aa;
			cout << "insert index" << endl;
			cin >> idx;

			if (idx < 0 || isdigit(idx) == true)
			{
				cout << "invalid input" << endl;
				this->updateValue(str1);
				return false;
			}

			flag = this->setCharAt(aa, idx);
			if (flag == false)
			{
				this->updateValue(str1);
				return false;
			}
		}
		return true;
	}
}

char String::getCharAt(int a)
{
	if (a > 9 || isdigit(a) == false || str[a] == '\0')
	{
		cout << "invalid input" << endl;
		return '-';
	}
	return this->str[a];
}

void String::printValue()
{
	int i = 0;
	while (this->str[i] != NULL)
	{
		cout << this->str[i];
		i++;
	}
	cout << endl;
}

void String::printValue(bool con)
{
	char cc[10] = "";
	if (con)
	{
		for (int i = 0; i < 9 && this->str[i] != '\0'; i++)
		{
			if (this->str[i] <= 'z' && this->str[i] >= 'a')
			{
				cc[i] = this->str[i] - ('a'-'A');
			}
			else
			{
				cc[i] = this->str[i];
			}
		}
		cout << cc << endl;
	}
	else
	{
		for (int i = 0; i < 9 && this->str[i] != '\0'; i++)
		{
			if (this->str[i] <= 'Z' && this->str[i] >= 'A')
			{
				cc[i] = this->str[i] + ('a' - 'A');
			}
			else
			{
				cc[i] = this->str[i];
			}
		}
		cout << cc << endl;
	}
}
