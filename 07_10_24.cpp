#include <iostream>
#include <string>
#include <cstring>
#include <bitset>
#include <sstream>
#include <vector>
#include <cmath>
#include <utility>
#include <fstream>
#include <string>

#define INT "107_24.txt"
using namespace std;


/*
Текстовый файл состоит из символов A, B и C.

Определите максимальное количество идущих подряд пар символов AB или CB в прилагаемом файле.

Искомая подпоследовательность должна состоять только из пар AB, или только из пар CB, или только из пар AB и CB в произвольном порядке следования этих пар.

Для выполнения этого задания следует написать программу.

*/

//ABCBCBCBCACB!!ABABABAB

bool check(string s){
    if (s[0] == 'A'){
        if(s[1] == 'B') return 1;
        return 0;
    }
    if (s[0] == 'C'){
        if(s[1] == 'B') return 1;
        return 0;
    }
    return 0;
}


int main(){

    
    ifstream fin(INT);

    string s;
    //cin>>s;
    getline(fin, s);
    int count = 0;
    int max = -100;

    for (int i = 0; i < s.length(); i++){
        string s1 = "AA";
        s1[0] = s[i];
        s1[1] = s[i+1];
        if (check(s1)){ 
            count  = count++; 
            if (max < count) max = count;
        }
        if (!check(s1)) count = 0;
    } 

    cout<<max<<endl;
    

    //string s1 = "AA";
    //s1[0] = s[i];
    //s1[1] = s[i+1]; 
    check("s[i] s[i+1]");
}
