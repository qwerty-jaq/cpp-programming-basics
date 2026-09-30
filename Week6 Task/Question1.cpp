/*Question 1
Basic File Writing and Reading
•	Task : Write a C++ program that creates a file named "students.txt" and allows the user to input multiple student names and their scores.
		   Write each student's name and score on a new line in the file. 
		   Then, read and display the content of the file on the screen.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main1() {
	
	ofstream outFile("Students.txt");
	if (!outFile) {
		cerr << "Error while opening file!\n";
		return 1;
	}

	string name;
	int score;
	char choice = 'y';

	while (choice == 'y' || choice == 'Y') {

		cout << "Enter student's name: \n";
		cin.ignore();
		getline(cin, name);

		cout << "Enter " << name << "'s score: \n"; //PROBLEM WITH THE STUDENT NAME!!!
		cin >> score;

		outFile << name << " " << score << endl;

		cout << "Would you like to add another student? (y/n): \n";
		cin >> choice;
	}
		
	outFile.close();
	
	ifstream inFile("Students.txt");
		if (!inFile) {
			cerr << "Error while opening file!\n"; 
			return 1;
		}

		cout << "\nContents of 'Students.txt':\n";
		while (getline(inFile, name, ' ')) {
			inFile >> score;
			inFile.ignore();
			cout << "Name: " << name << ", Score: " << score << endl;
		}
	
	inFile.close();

	return 0;
}