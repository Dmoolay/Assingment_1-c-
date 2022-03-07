/* Assignment: 1
DOR MOOLAY, ID: 205870637
SNIR MOSCOVICH, ID: 206293128
*/
#include "TwoDigits.h"
#include "Fraction.h"
#include "String.h"
#include "Menu.h"
#include <iostream>
using namespace std;

void Menu::MainMenu() {
	int x;
	cout << "Main Menu:" << endl;
	cout << "(0) Print this Menu again" << endl;
	cout << "(1) TwoDigits Menu" << endl;
	cout << "(2) Fractions Menu" << endl;
	cout << "(3) String Menu" << endl;
	cout << "(4) Exit" << endl;
	while (true) {
		cin >> x;
		switch (x) {
		case 0:
			cout << "(0) Print this Menu again" << endl;
			cout << "(1) TwoDigits Menu" << endl;
			cout << "(2) Fractions Menu" << endl;
			cout << "(3) String Menu" << endl;
			cout << "(4) Exit" << endl;
			break;
		case 1:
			twoDigitsMenu();
			break;
		case 2:
			fractionMenu();
			break;
		case 3:
			stringMenu();
			break;
		case 4:
			cout << "Goodbye!" << endl;
			return;
		}
		if (x < 0 || x>4) cout << "Invalid Input." << endl;
		else {
			if (x != 0) {
				cout << "Main Menu:" << endl;
				cout << "(0) Print this Menu again" << endl;
				cout << "(1) TwoDigits Menu" << endl;
				cout << "(2) Fractions Menu" << endl;
				cout << "(3) String Menu" << endl;
				cout << "(4) Exit" << endl;
			}
		}
	}
}

void Menu::twoDigitsMenu() {
	bool y = true;
	int  input, a;
	char tens, units;
	cout << "enter the tens:" << endl;
	while (y) {
		cin >> tens;
		if (tens <57 && tens >48)
		{
			y = false;
		}
		else
		{
			cout << "invalid input." << endl;
		}
	}
	y = true;
	cout << "enter the units:" << endl;
	while (y) {
		cin >> units;
		if (units < 57 && units > 48)
		{
			y = false;
		}
		else
		{
			cout << "invalid input" << endl;
		}
	}
	TwoDigits num1(tens, units);
	y = true;
	cout << "enter number between 0 and 99:" << endl;
	while (y) {
		cin >> input;
		if (input >= 0 && input <= 99)
		{
			y = false;
		}
		else
		{
			cout << "invalid input." << endl;
		}
	}
	TwoDigits num2(input);
	cout << "TwoDigits Menu:" << endl;
	cout << "(0) Print this Menu again" << endl;
	cout << "(1) Update first number" << endl;
	cout << "(2) Show sum of values" << endl;
	cout << "(3) Print values" << endl;
	cout << "(4) Return to main menu" << endl;
	y = true;
	while (y) {
		cin >> input;
		switch (input) {
		case 0:
			cout << "(0) Print this Menu again" << endl;
			cout << "(1) Update first number" << endl;
			cout << "(2) Show sum of values" << endl;
			cout << "(3) Print values" << endl;
			cout << "(4) Return to main menu" << endl;
			break;
		case 1:
			cout << "Enter a number between 0 and 99:" << endl;
			cin.clear();
			cin.ignore();
			cin >> input;
			if (input < 0 || input > 99)
			{
				cout << "Invalid input." << endl;
			}
			else
			{
				num1.update(input);
				cout << "Number updated." << endl;
			}
			input = 1;
			break;
		case 2:
			a = num1.value() + num2.value();
			cout << "The sum of ";
			num1.printValue();
			cout << "+";
			num2.printValue();
			cout << " is: " << a << endl;
			break;
		case 3:
			cout << "First two digit number: ";
			num1.printValue();
			cout << endl;
			cout << "Second two digit number: ";
			num2.printValue();
			cout << endl;
			break;
		case 4:
			cout << "Returning to main menu." << endl;
			y = false;
			break;
		}
		if (input < 0 || input>4)
		{
			cout << "Invalid Input." << endl;
		}
	}
}
void Menu::fractionMenu() {
	bool y = true;
	int mone, mehane, input, a;
	double add, sum;
	cout << "enter Numerator:" << endl;
	cin >> mone;
	cout << "enter Denominator:" << endl;
	cin >> mehane;
	Fraction shever(mone, mehane);
	cout << endl;
	cout << "Fractions Menu:" << endl;
	cout << "(0) Print this Menu again" << endl;
	cout << "(1) Update Numerator" << endl;
	cout << "(2) Update Denominator" << endl;
	cout << "(3) Print fraction" << endl;
	cout << "(4) Print sum of fractions" << endl;
	cout << "(5) Return to main menu" << endl;
	while (y) {
		cin >> input;
		switch (input) {
		case 0:
			cout << "(0) Print this Menu again" << endl;
			cout << "(1) Update Numerator" << endl;
			cout << "(2) Update Denominator" << endl;
			cout << "(3) Print fraction" << endl;
			cout << "(4) Print sum of fractions" << endl;
			cout << "(5) Return to main menu" << endl;
			break;
		case 1:
			cout << "Enter numerator:" << endl;
			cin >> a;
			shever.updateNumerator(a);
			break;
		case 2:
			cout << "Enter Denominator:" << endl;
			cin >> a;
			shever.updateDenominator(a);
			break;
		case 3:
			shever.printValue();
			break;
		case 4:
			cout << "Enter another fraction:" << endl;
			cin >> add;
			sum = add + double(shever.value());
			cout << "The sum of ";
			shever.printValue();
			cout << " and " << add << " is: " << sum << endl;
			break;
		case 5:
			cout << "Returning to main menu." << endl;
			y = false;
			break;
		}
		if (input < 0 || input>5)
		{
			cout << "Invalid Input." << endl;
		}
	}
}
void Menu::stringMenu() {
	bool y = true, err;
	int input, idx, i;
	char a[10];
	char chr;
	String str;
	cout << "Strings Menu:" << endl;
	cout << "(0) Print this Menu again" << endl;
	cout << "(1) Update string" << endl;
	cout << "(2) Update characters one by one" << endl;
	cout << "(3) Update character in an index" << endl;
	cout << "(4) Find character in an index" << endl;
	cout << "(5) Print string" << endl;
	cout << "(6) Print Lowercase" << endl;
	cout << "(7) Print Uppercase" << endl;
	cout << "(8) Return to main menu" << endl;
	while (y) {
		cin.clear();
		cin.ignore();
		cin >> input;
		switch (input) {
		case 0:
			cout << "(0) Print this Menu again" << endl;
			cout << "(1) Update string" << endl;
			cout << "(2) Update characters one by one" << endl;
			cout << "(3) Update character in an index" << endl;
			cout << "(4) Find character in an index" << endl;
			cout << "(5) Print string" << endl;
			cout << "(6) Print Lowercase" << endl;
			cout << "(7) Print Uppercase" << endl;
			cout << "(8) Return to main menu" << endl;
			break;
		case 1:
			cout << "Enter a string up to 9 characters:" << endl;
			cin.clear();
			cin.ignore();
			cin.get(a, 10);
			str.updateValue(a);
			break;
		case 2:
			for (i = 0; i < 9; i++) {
				cout << "Insert character. Insert + to stop." << endl;
				cin.clear();
				cin.ignore();
				cin >> chr;
				if (chr == '+')
				{
					break;
				}
				str.setCharAt(chr, i);
			}
			break;
		case 3:
			cout << "Insert the index and then the character" << endl;
			cin >> idx;
			cin.clear();
			cin.ignore();
			cin >> chr;
			err = str.setCharAt(chr, idx);
			if (!err)
			{
				cout << "Invalid index entered." << endl;
			}
			else
			{
				cout << "Updated." << endl;
			}
			break;
		case 4:
			cout << "Insert the index" << endl;
			cin >> idx;
			cout << "The value in index " << idx << " us: '" << str.getCharAt(idx) << "'." << endl;
			break;
		case 5:
			str.printValue();
			break;
		case 6:
			str.printValue(false);
			break;
		case 7:
			str.printValue(true);
			break;
		case 8:
			cout << "Returning to main menu." << endl;
			y = false;
			break;
		}
		if (input < 0 || input>8)
		{
			cout << "Invalid Input." << endl;
		}
	}
}