#include <iostream>
#include "math.h"
#include "windows.h"
int main()
{
	using namespace std;
	cout << "g = M * G / (R + r)^2" << endl;
	float M, G, R, r, g, c;
	M = 7, 35 * 10;
	G = 6, 67 * 10;
	R = 1735;
	cout << "M = 7, 35 * 10 ^ 22" << endl;
	cout << "G = 6, 67 * 10 ^ -11" << endl;
	cout << "R = 1735" << endl;
	cout << "Enter r = ";
	cin >> r;
	c = (R + r) * (R + r);
	g = M * G / c;
	cout << "g = " << g << endl;
	system("pause");
	return 0;
}