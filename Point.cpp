#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;
bool Point::Init(double x, double y)
{
	if (fabs(x) <= 100 && fabs(y) <= 100)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}
void Point::Read()
{
	double x, y;
	do
	{
		cout << "Input value:" << endl;
		cout << "x="; cin >> x;
		cout << "y="; cin >> y;
	} while (!Init(x, y));
}
void Point::Display()
{
	cout << endl;
	cout << "x=" << first << endl;
	cout << "y=" << second << endl;
}
double Point::distance()
{
	return sqrt(fabs(first) * fabs(first) + fabs(second) * fabs(second));
}
