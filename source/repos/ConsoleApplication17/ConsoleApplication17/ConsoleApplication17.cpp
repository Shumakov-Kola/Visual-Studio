#include "windows.h"
#include "cmath"
#include <iostream>

using namespace std;

int main()
{
	int y, dob = 1;
	float z;
	cout << "Enetr y = ";
	cin >> y;

	if (y == -2) {

		cout << "Error" << endl;
	}

	else {
		for (int i = 1; i <= 10; i++) {

			dob = dob * log(i * y);
		}

		z = cos(dob) / (y + 2);
		cout << "z = " << z << endl;
	}
}




