#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;



int search_M(int a) {
    int m = 0;
    int i = 1;
    while (1) {
        i++;
        if (a % i == 0) {
            m = a / i + i;
            return m;
        }
    }
    return m;
}



int main() {
    int i = 452021;
    int count = 5;
    while (count > 0) {
        i++;
        int m = search_M(i);
        if (m % 7 == 3) {
            cout << i << " " << m << endl;
            count = count - 1;
        }
        
    }
    return 0;
}
