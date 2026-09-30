#include <iostream>
#include <string>
using namespace std;

const int NUM_STUDENTS = 10;

struct Student {
	string name;
	double test1;
	double test2;
	double finalMark;
};

void inputStudentData(Student students[]) {
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		cout << "Enter the full name of Student: " << (i + 1) << ": ";
		cin.ignore();
		getline(cin, students[i].name);
		cout << "Enter mark for TEST 1 " << students[i].name << ": ";
		cin >> students[i].test1;
		cout << "Enter mark for TEST 2 " << students[i].name << ": ";
		cin >> students[i].test2;
		students[i].finalMark = (students[i].test1 + students[i].test2) / 2;
	}
}

void displayFinalMarks(const Student students[]) {
	cout << "Final Marks: " << endl;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		cout << students[i].name << ": " << students[i].finalMark << endl;
	}
}

void distinctiveStudents(const Student students[]) {
	cout << "Distinctive Students (80% and above):" << endl;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		if (students[i].finalMark >= 80) {
			cout << students[i].name << ": " << students[i].finalMark << endl;
		}
	}
}

void atRiskStudents(const Student students[]) {
	cout << "Students at-risk (below 50%):" << endl;
	for (int i = 0; i < NUM_STUDENTS; ++i) {
		if (students[i].finalMark < 50) {
			cout << students[i].name << ": " << students[i].finalMark << endl;
		}
	}
}

int main() {
	Student students[NUM_STUDENTS];
	bool dataEntered = false;

	while (true) {
		cout << "\nMenu: \n";
		cout << "1. Enter student names and marks\n";
		cout << "2. Display final marks for all students\n";
		cout << "3. Display distinctive students\n";
		cout << "4. Display students at-risk\n";
		cout << "5. Exit\n";
		cout << "Enter option of choice: ";

		int choice;
		cin >> choice;

		switch (choice) {
		case 1:
			inputStudentData(students);
			dataEntered = true;
			break;
		case 2:
			if (dataEntered) {
				displayFinalMarks(students);
			}
			else {
				cout << "Please enter student data first." << endl;
			}
			break;
		case 3:
			if (dataEntered) {
				distinctiveStudents(students);
			}
			else {
				cout << "Please enter student data first." << endl;
			}
			break;
		case 4: 
			if (dataEntered) {
				atRiskStudents(students);
			}
			else {
				cout << "Please enter student data first." << endl;
			}
			break;
		case 5: 
			cout << "Exiting the program. Goodbye!" << endl;
			return 0;
		default: 
			cout << "Invalid choice, Please try again." << endl;
		}
	}

	return 0;
}