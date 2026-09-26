// Lab_03.4.cpp
// < Прокопчук Юлія >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою 
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double R; //вхідний параметр
	double x; //вхідний аргумент
	double y; //вхідний аргумент

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if (y >= 0 && x * x + y * y <= R * R || y <= x && y >= -R && x <= 0)
		cout << "yes";
	else
		cout << "no";

	cin.get();
	return 0;
}