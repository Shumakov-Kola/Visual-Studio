// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "math.h"
#include "windows.h"
#include <iostream>

using namespace std;
int main()

{	
	
	double x, b, c, v, n;

	printf("input x: ");
	scanf_s("%lf\n", &x);

	c = 4 * pow(sin(x), 3);
	v = pow(1 + cos(5 * x), 2);
	n = c / v;
	b = n + cos(80);

	printf("b = %lf\n", b);



	
	




	system("pause");
	return 0;
}


