#include <iostream>
#include <windows.h>
#include "math.h"
int main()
{
	using namespace std;
	setlocale(LC_ALL, "Russian");
	cout << "Количество десятков меньше или равно количеству единиц" << endl;
	int a = 357;
	cout << "Enter a: ";
	cin >> a;
	int b = (a % 60);
	cout << b << endl;
	
	
	
	
	system("pause");
	return 0;
}

