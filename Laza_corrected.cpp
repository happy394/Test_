#include <iostream>
#include <string>

using namespace std;

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
    int n; // кол-во учеников
    cin >> n;
    buff buff_m; // мальчики
    buff buff_f; // девочки
    students array[100]; //массив со всеми учениками и их данными
    for (int i = 0; i < n; i++) {                                       // прогон всего массива с учениками students array[100]
        cin >> array[i].gender >> array[i].name >> array[i].mark;
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

    }
    cout << endl << "The best students:" << endl;
    cout << array[buff_m.i].name << ",  mark: " <<array[buff_m.i].mark << endl;
    cout << array[buff_f.i].name << ",  mark: " << array[buff_f.i].mark << endl;
    return 0;
}

//Для теста программы можно взять эти данные:
// 1 John 3   1 Erik 5   0 Adel 2   0 Eva 5
// Можно просто скопировать и вставить, не забыв упомянуть, что учеников 4
