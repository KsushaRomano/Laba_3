// Laba_3_7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	cout << "Введите значение А: ";
	cin >> A;
	B = A * A;
	C = B * B;
	A = C * C * B * B * B * A;
	cout << "Значение А в 15-ой степени равно: " << A;
}
