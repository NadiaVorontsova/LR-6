#include "ind_.h"
#include "windows.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	float B1_x, B1_w;
	int B1_y;
	double B;
	cout << "������� x ��� B: ";
	cin >> B1_x;
	cout << "������� w ��� B: ";
	cin >> B1_w;
	cout << "������� y ��� B: ";
	cin >> B1_y;
	B = B1(B1_x, B1_w, B1_y);
	cout << "B= " << B << endl;
	system("pause");
	return 0;
}
