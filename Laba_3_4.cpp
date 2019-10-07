// Laba_3_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	cout << "Введите значение х: ";
	cin >> x;
	y = (3 * x * x * x * x * x * x) - (6 * x * x) - 7;
	cout << "Значение функции равно: " << y;
}