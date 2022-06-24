#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
#define IN "D:/input.txt"
int main() {
    ifstream fin(IN);
    if (!fin.is_open()) {
        cout << "Error" << endl;
        exit(0);
    }
    string s;
    getline(fin, s);
    s = s + s;
    int n = 1;
    int maxx;
    for (int i = 0; i < s.length(); i++) {
        if ((int)s[i] <= (int)s[i + 1]) n++;
        else {
            maxx = max(maxx,n);
            n = 1;
        }
        
    }
    fin.close();
    cout << maxx << endl;
    return 0;
}
