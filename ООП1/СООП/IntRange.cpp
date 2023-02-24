#include "IntRange.h"
#include <iostream>
using namespace std;

void IntRange::Read()
{
	int x, y;
	cout << "first = ";
	cin >> x;
	cout << "second = ";
	cin >> y;
	Init(x, y);
}
bool IntRange::Init(int x, int y)
{
	first = x;
	second = y;
	if (first >= second ) {
		first = 0;
		second = 0;
		cout << "Wrong arguments to Init!" << endl;
		return false;
	}
	else {
		return true;
	}
}
void IntRange::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void IntRange::rangeÑheck()
{
	int num;
	cout << "Enter number: ";cin >> num;cout << endl;
	if (num >= first && num < second) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}