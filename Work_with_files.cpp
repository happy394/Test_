#include <iostream>
#include <fstream>
using namespace std;
#define OUT "output.txt" 
int main() {

	std::ofstream fout(OUT);   //или снчала std::ofstream fout; а потом fout.open(OUT);
	
	if (!fout.is_open()) {
		std::cout << "File couldn't be opened." << std::endl;
		exit(0);				//выброс из программы, как при ошибке
	}
	int a = 1;
	fout << a << endl;
	fout.close();
	return 0;
}
