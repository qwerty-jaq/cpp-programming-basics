/*
Write a C++ program with a function called isValidAge(int age) that returns true if the age is between 0 and 120, inclusive.
The main program should use this function to validate the user’s input.*/

#include <iostream>
using namespace std;

bool isValidAge(int age) {
	return (age >= 0 && age <= 120);
}

int main() {
	int age;

	cout << "Please provide your age: ";
	cin >> age;

	while (!isValidAge(age)) {
		cout << "Error: Incorrect age, must be between 0-120 \n";
		cout << "PLease try again: ";
		cin >> age;
	}

	cout << "You entered a valid age: " << age << endl;
	

	return 0;
}