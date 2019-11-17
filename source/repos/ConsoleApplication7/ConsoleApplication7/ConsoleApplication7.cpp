#include "math.h"
#include "windows.h"
#include <iostream>

using namespace std;
int main()

{	
	double a, x, y, g, b, c, v;
	printf("input x: ");
	scanf_s("%lf", &x);
	printf("input y: ");
	scanf_s("%lf", &y);
	
	b = (1 - sqrt(2 * x) + pow(x, 4) + exp(4 * y)) / (1 - pow(8 * pow(y, 3), 1 / 4)) / (1 - pow(fabs(2 + y), 1 / 3));

	
	
	printf("g=%lf\n", b);
	
	
	system("pause");
	return 0;
}