#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int check_2(int b) {
	if (b > 0) { // проверка положительное ли число
		int buff = b;
		int count = 0;
		for (int i = 0; i < 4; i++) { //проверка трёхзначное ли число
			buff = buff / 10;
			if (buff == 0) {
				i = 4;
			}
			count++;
		}
		buff = b;
		if (count == 3) { // если да, то...
			if (buff % 5 == 0 && buff % 10 != 0) { // проверка делится ли на пять
				return 1; //если да, то возвращаем 1

			}
		}
	}
	return 0;
}
int check_1(int a) {
	if (a > 0) { // проверка положительное ли число
		int buff = a;
		int count = 0;
		for (int i = 0; i < 4; i++) { //проверка трёхзначное ли число
			buff = buff / 10;
			if (buff == 0) {
				i = 4;
			}
			count++;
		}
		buff = a;
		if (count == 3) { // если да, то...
			if (buff % 5 == 0 && buff % 10 != 0) { // проверка делится ли на пять
				return 0; //если да, то возвращаем 0
			}
			return 1;
		}
		return 1;
	}
	return 1;
}
int check_3(int c) {
	if (c > 0) { // проверка положительное ли число
		int buff = c;
		int count = 0;
		for (int i = 0; i < 4; i++) { //проверка трёхзначное ли число
			buff = buff / 10;
			if (buff == 0) {
				i = 4;
			}
			count++;
		}
		buff = c;
		if (count == 3) { // если да, то...
			if (buff % 5 == 0 && buff % 10 != 0) { // проверка делится ли на пять
				return 0; //если да, то возвращаем 0
			}
			return 1;
		}
		return 1;
	}
	return 1;
}

int main() {
	int m = 0; // кол-во нужных троек
	int maxx = 0; // максимальная сумма тройки
	ifstream fin("D:/input.txt");
	if (!fin.is_open()) {
		cout << "Error to open the file" << endl;
		exit(0);
	}
	int array[5000];
	int i = 0;
	while (fin >> array[i]) {
		i++;
	}
	for (int i = 0; i < 4498; i++) {
		/*fin >> array[i] >> array[i + 1] >> array[i + 2];*/
		/*cout << array[i] << " " << array[i + 1] << " " << array[i + 2] << endl;*/
		if (check_2(array[i]) == 1 && check_1(array[i+1]) == 1 && check_3(array[i+2]) == 1) {
			m++;
			int buff = array[i] + array[i + 1] + array[i + 2];
			maxx = max(maxx, buff);
		}
	}
	cout << "Number of triples: " << m << " Max summ of those triples: " << maxx << " check_2:" << check_2(105) << endl;
	
}
