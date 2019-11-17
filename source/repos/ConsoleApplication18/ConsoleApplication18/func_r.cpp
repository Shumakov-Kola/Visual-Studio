#define _USE_MATH_DEFINES
#include "func.h"
#include "math.h"
#include <iostream>

using namespace std;

float a(int x, int y, int alp) 
{

	return (y != 0) ? (2 * pow(cos(5 * x + M_PI / 3), 2)) / pow(sin(pow(y, 3)), 2) + (cos(alp + 105 * M_PI / 180)) : 0;

}
float b(int x, int z, int y)
{

	return (x != 0 || z != 0) ? sqrt(10 * pow(x, 2) - (pow(y, 3) / 9 * x)) + pow(pow(fabs(24 * z - 8 * y), 3) / pow(z, 3), 1. / 3) :0;
}