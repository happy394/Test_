#include <iostream>
#include <string>
using namespace std;

int hon[1000][2];
bool check(int num, int end, int buff) {
	for (int i = 0; i < end; i++) {
		if (num == hon[i][0]) {
			buff = i;
			return 1;
		}
	}
	return 0;
}

int main() {
	/*string s;
	s = "Hello world";
	cout << s.length();*/
	int n;
	int buff = 0;
	cin >> n;
	int array[1000];
	int end = 0;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
		if (check(array[i], end, buff) == 1) {
			hon[buff][1]++;
		}
		else {
			hon[end + 1][0] = array[i];
			hon[end + 1][1] = 1;
			end++;
		}
	}
	for (int i = 0; i < end; i++) {
		cout << hon[i][0] << " " << hon[i][1] << endl;
	}
}
