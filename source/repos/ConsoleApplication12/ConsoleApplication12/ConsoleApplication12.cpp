#include <math.h>
#include <windows.h>
#include <iostream>

using namespace std;
int main()

{	
	int  a, b;
	float h;
	cout << "Enter a = ";
	cin >> a;
	cout << "Enter b = ";
	cin >> b;
	cout << "Enter h = ";
	cin >> h;
	float y, x = a;
	while (x <= b)
	{
		y = sin(pow(x, 2)) + 2 * cos(x) + 3;
		cout << "x = " << x << "   " << "y = " << y << endl;
		x += h;
	}

	system("pause");
	return 0;

}
