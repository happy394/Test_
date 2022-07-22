#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int changer(int a, int b1, int b2) {
	cout << "Введите число" << endl;
	cin >> a;
	cout << "Укажите систему счисления числа и ту, в которую вы хотите перевести" << endl;
	cin >> b1 >> b2;
	int array[20];
	int digits = 0;
	int divider = 1;
	int buff = a;
	int number_10 = 0;
	while (buff != 0) {
		buff = buff / 10;
		digits++;
	}
	cout << digits << endl;
	int degree = 0;
	for (int i = 0; i < digits; i++) {
		if (b1 == 10) {
			break;
		}// выход из фор, если уже было дано десятичное число
		array[i] = ((a / divider) % 10) * pow(b1, degree);
		divider = divider * 10;
		degree++;		
	}
	for (int i = 0; i < digits; i++) {
		number_10 = number_10 + array[i];
	}
	cout << number_10 << endl;
	return 1;
}

int main() {
	setlocale(LC_ALL, "");
	int a = 0, b1 = 0, b2 = 0;
	changer(a, b1, b2);
	return 0;
}
