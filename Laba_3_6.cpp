// Laba_3_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double A, B;
	cout << "Введите значение А: ";
	cin >> A;
	B = A * A;
	A = B * B * B * B;
	cout << "Значение А в 8-ой степени равно: " << A;
}