// Lab_03.3.cpp
// < Прокопчук Юлія >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції 
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; //вхідний аргумент
	double R; //вхідний параметр
	double y; //результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	//розгалуження у повній формі
	if (x <= 0)
		y = (-x * R - 6 * R) / 6;
	else
		if (0 < x && x <= R)
			y = -sqrt(pow(R, 2) - pow(x, 2));
		else
			if (R < x && x <= 2 * R)
				y = sqrt(-3 * pow(R, 2) - pow(x, 2) + 4 * x * R);
			else
				y = R;

	cout << endl;
	cout << "y = " << y;

	cin.get();
	return 0;
}
