#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	double F, a, x, b, c;

	cout << "Enter a: ";
	cin >> a;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	if (x < 0.6 && b + c != 0) {

		F = a * pow(x, 3) + pow(b, 2) + c;
		cout << "F = " << F << endl;
		if (x > 0.6 && b + c == 0) {

			F = (x - a) / (x - c);
			cout << "F = " << F << endl;

		}
	}


	else {
		F = x / c + x / a;
		cout << "F = " << F << endl;
	}



	system("pause");

}






	 

		
	





