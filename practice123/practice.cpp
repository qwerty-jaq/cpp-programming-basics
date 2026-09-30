#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	
	string text;
	ifstream readFile("Read.txt");
	while (getline(readFile, text)) {
		cout << text;
	}

	readFile.close();

}