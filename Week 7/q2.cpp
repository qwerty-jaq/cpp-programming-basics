/*The Input Validation Loop
Create a C++ program that repeatedly asks the user to enter a number between 1 and 100.
If the input is outside this range, display an error message and prompt the user again until a valid number is entered
*/

#include <iostream>
using namespace std;

int main() {

	int num;

	cout << "Please enter a number between 1 and 100: ";
	cin >> num;

	//while-loop
	while (num < 1 || num > 100) {
		cout << "Error: number must be between 1-100\n";
		cout << "Please try again: ";
		cin >> num;
	}

	cout << "You entered: " << num << endl;

	return 0;
}