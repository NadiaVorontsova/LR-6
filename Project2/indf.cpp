#include "ind_.h"
#define USE_MATH_DEFINES
#include <math.h>  
#include <iostream>
using namespace std;

double B1(float x, float w, int y)
{
	if((x + 1 != 0) && (y != 0) && ((x - 1) / (x + 1) > 0) && (log((x - 1) / (x + 1)) / log(3.) > 0) && ((log(log((x - 1) / (x + 1)) / log(3.)) / log(.5)) >= 0))
	{
		return 10 * sqrt(log(log((x - 1) / (x + 1)) / log(3.)) / log(.5)) + pow((pow(x, 3) - w * w / y), 1. / 5);
	}
	else 
	{
		cout << "error" << "/t";
	}
}