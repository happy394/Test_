#include <iostream>
#include <string>

using namespace std;

struct students { // Тип данных (int)
    bool gender; // мальчик = 1. девочка = 0.
    string name;
    int mark; // Пусть будут от 1 до 5 
};

struct buff {
    int mark = 0;
    int i;
};

int main() {
    int n;
    cin >> n;
    buff buff_m;
    buff buff_f;
    students array[100];
    string s = "John";
    //cout << s;
    /*cin >> array[i].gender >> array[i].name >> array[i].mark;
    cout << array[i].gender << array[i].name << array[i].mark;*/
    for (int i = 0; i < n; i++) {
        cin >> array[i].gender >> array[i].name >> array[i].mark;
        //s = array[i].name;
        //cout << s;
        if (array[i].gender == 1) {
            if (buff_m.mark > array[i].mark) {
                buff_m.i = i;
                buff_m.mark = max(buff_m.mark, array[i].mark);
            }
        }
        if (array[i].gender == 0) {
            if (buff_f.mark > array[i].mark) {
                buff_f.i = i;
                buff_f.mark = max(buff_f.mark, array[i].mark);
            }
        }
        
    }
    cout << buff_m.i;
    s = array[buff_m.i].name;
    cout << s << array[buff_m.i ].mark << endl;
    /*cout << array[buff_f.i].name << array[buff_f.mark].mark;*/
    return 0;
}
