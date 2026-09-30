#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
	string name;
	int score;
};

int main() {
	ofstream outFile("students.txt");

	if (!outFile) {
		cerr << "Error: Could not open file " << endl;
		return 1;
	}

	Student student[5] = {
		{"Alice", 76},
		{"Jake", 55},
		{"John", 67},
		{"Abby", 98},
		{"Lyana", 23}
	};

	for (int i = 0; i < 5; i++) {
		outFile << student[i].name << " " << student[i].score << endl;
	}

	outFile.close();
	cout << "Student data has been written to file!" << endl;

	return 0;
}