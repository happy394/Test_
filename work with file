#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define OUT "output.txt"
#define INT "Input.txt"

struct students { // Тип данных (int)
    bool gender; // мальчик = 1. девочка = 0.
    string name;
    int mark; // 5-и бальная система
};

struct buff {
    int mark = 0; // ставим минимальную, чтобы любая отметка ученика в последствии заменила эту переменную
    int i; // принимаетя положение, как и в массиве, чтобы сразу вывести имя в ответе
};

int main() {
    int i = 0;
    buff buff_m; // мальчики
    buff buff_f; // девочки
    students array[100]; //массив со всеми учениками и их данными
    ifstream fin(INT);
    if (!fin.is_open()) {
        std::cout << "File couldn't be opened." << std::endl;
        exit(0);				//выброс из программы, как при ошибке
    }
    while ((fin >> array[i].gender) && (fin >> array[i].name) && (fin >> array[i].mark)) {
        if (array[i].gender == 1) {                                     // вычисление лучшей отметки у мальчиков
            if (buff_m.mark < array[i].mark) {
                buff_m.i = i;
                buff_m.mark = max(buff_m.mark, array[i].mark);
            }
        }
        if (array[i].gender == 0) {                                     // вычисление лучшей отметки у девочек
            if (buff_f.mark < array[i].mark) {
                buff_f.i = i;
                buff_f.mark = max(buff_f.mark, array[i].mark);
            }
        }
        i++;
    }
cout << endl << "The best students:" << endl;
cout << array[buff_m.i].name << ",  mark: " << array[buff_m.i].mark << endl;
cout << array[buff_f.i].name << ",  mark: " << array[buff_f.i].mark << endl;
return 0;
}
