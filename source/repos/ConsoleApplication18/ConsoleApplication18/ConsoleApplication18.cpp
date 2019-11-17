

#include "windows.h"
#include "math.h"
#define _USE_MATH_DEFINES
#include <iostream>
#include "func.h"

using namespace std;



void main()
{
	int x, y, z, alp;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "alp = ";
	cin >> alp;
	cout << "z = ";
	cin >> z;

	cout << "a = " << a(x, y, alp) << endl;
	cout << "b = " << b(x, z, y) << endl;

	if (a(x, y, alp) < b(x, z, y)) {
		cout << "a < b" << endl;
		if (a(x, y, alp) > b(x, z, y)) {
			cout << "a > b" << endl;
		}
	}
	
	else
	{
		cout << "a = b" << endl;
	}
	
}




