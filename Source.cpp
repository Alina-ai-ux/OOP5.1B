//Source.cpp
#include <iostream>
#include "Point.h"
using namespace std;
int main()
{
	Point A;
	A.SetX(2.5);
	A.SetY(-6);
	Point B(2.3, -6);
	B++;
	cout << "Distance1 = " << A.Distance(B) << endl;
	Point A1;
	double x, y;
	cout << "Enter A(x)" << endl;
	cin >> x;
	A1.SetX(x);
	cout << "Enter A(y)" << endl;
	cin >> y;
	A1.SetY(y);
	Point B1;
	double a, b;
	cout << "Enter B(x)" << endl;
	cin >> a;
	B1.SetX(a);
	cout << "Enter B(y)" << endl;
	cin >> b;
	B1.SetY(b);
	try
	{
		cout << "Distance = " << A1.Distance(B1) << endl;
	}
	catch (const int ex)
	{
		cerr << "Unable to find distance." << endl;
	}
	return 0;

}
