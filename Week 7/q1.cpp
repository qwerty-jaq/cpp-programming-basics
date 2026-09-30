/*Error Checking Mechanisms
Write a program that asks the user to enter a non-negative integer.
If the user enters a negative number, display an error message and prompt them again until a valid input is received.
*/

#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "Please enter a non-negative integer: ";
	cin >> num;

	//while-loop until a non-negative integer is entered
	while (num < 0) {
		cout << "Error: Enter a non-negative integer!\n";
		cout << "Please try again: ";
		cin >> num;
	}

	cout << "You entered: " << num << endl;

	return 0;

}