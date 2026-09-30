#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

double calculateAverage(int test1, int test2) {
	return (test1 + test2) / 2.0;
}

string determineStatus(double averageScore) {
	return (averageScore >= 50) ? "Pass" : "Fail";
}

int main() {

	ifstream inputFile("student.txt");
	if (!inputFile) {
		cerr << "Error: Could not open the file 'student.txt'" << endl;
		return 1;
	}

	ofstream outputFile("student_results.txt");
	if (!outputFile) {
		cerr << "Error: Could not open the file 'student.txt'" << endl;
		return 1;
	}

	int studentNumber, test1Mark, test2Mark; 
	string name;
	while (inputFile >> studentNumber >> name >> test1Mark >> test2Mark) {
		double averageScore = calculateAverage(test1Mark, test2Mark);
		string status = determineStatus(averageScore);
		outputFile << studentNumber << ", " << name << ", "
			<< averageScore << ", " << status << endl;
	} 

	inputFile.close();
	outputFile.close();

	cout << "Processing complete." << endl;

	return 0;
}