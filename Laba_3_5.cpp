// Laba_3_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cout << "Введите значение х: ";
	cin >> x;
	y = (4 * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3)) - (7 * (x - 3) * (x - 3) * (x - 3)) + 2;
	cout << "Значение функции равно: " << y;
}
