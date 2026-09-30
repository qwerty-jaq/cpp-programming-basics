#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const double TOTAL_EXCEED_BONUS = 100.0;

string customerName() {

	string name;
	cout << "Please provide your full name: \n";
	getline(cin, name);
	return name;
}

int calculatePoints(double amountSpent) {

	int points = amountSpent / 10;

	if (amountSpent > 100) {
		points += 100;
	}

	return points; 
	
}

void writeToFile(const string name, int totalPoints) {
	ofstream outFile("LoayltyPoints.txt", ios::app);
	if (outFile.is_open()) {
		outFile << "Customer Name: " << name << endl;
		outFile << "Customer Points:  " << totalPoints << endl;
		outFile << "---------------------" << endl;
		outFile.close();
		cout << "Details written to file!\n";
	}
	else {
		cerr << "Error: Could not write to file!\n";
	}
}

int main() {

	string name = customerName();

	double amountSpent;
	cout << "Please provide how much you have spent: R";
	cin >> amountSpent;

	int totalPoints = calculatePoints(amountSpent);

	cout << "\nCustomer: " << name << endl;
	cout << "You have spent: R" << amountSpent << endl;
	cout << "You have earned: " << totalPoints << " points\n";

	writeToFile(name, totalPoints);

	return 0;
}