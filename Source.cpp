#include "Point.h"
#include <iostream>
using namespace std;
Point makePoint(double x, double y)
{
	Point k;
	if (!k.Init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return k;
}
int main()
{
	Point k;
	k.Read();
	k.Display();
	cout << "distance(k)=" << k.distance() << endl << endl;
	double x, y;
	cout << "Input value:" << endl << endl;
	cout << " x = "; cin >> x;
	cout << " y = "; cin >> y;
	k = makePoint(x, y);
	k.Display();
	cout << "distance(k) = " << k.distance() << endl;
	cin.get();
	return 0;
}