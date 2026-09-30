//Library Fine System:
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//constant (global variable)
const double AMT_BOOK_DAY = 0.5;

//function for getting customers name
string customerName() {

	string name;
	cout << "Please enter your name: \n";
	getline(cin, name);
	return name;
	
}

//function to ask user for the number of books they are returning late as well as the number of days and then calculate the fine basked on teh user input.
double booksAndDaysLate(int& booksLate, int& daysLate) {
	
	cout << "Please state how many books: \n";
	cin >> booksLate;
	cout << "PLease state how many days they are late: \n";
	cin >> daysLate;

	return booksLate * (daysLate * AMT_BOOK_DAY);
	
}

void writeToFile(const string& name, double fine) {
	ofstream outFile("LibraryFine.txt", ios::app);
	if (outFile.is_open()) {
		outFile << "Customer name: " << name << endl;
		outFile << "Customer Fine: R" << fine << endl;
		outFile << "-------------------" << endl;
		outFile.close();
		cout << "Details written to file!\n";
	}
	else {
		cerr << "Error: Could not open file.\n";
	}
}



int main() {

	cout << "Welcome!\n\n";

	string name = customerName();
	
	int booksLate = 0, daysLate = 0;
	double fine = booksAndDaysLate(booksLate, daysLate);


	cout << "\nHallo, " << name << "!" << endl;
	cout << "Number of books late: " << booksLate << endl;
	cout << "Number of days late: " << daysLate << endl;
	cout << "Your Fine is: R" << fine << endl;

	writeToFile(name, fine);
	
	return 0;
}