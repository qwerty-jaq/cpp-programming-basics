/*Defensive Programming
Write a C++ program that accepts an integer from the user.
If the user enters a character or string instead of an integer, the program should handle the input gracefully and display an error message.
*/

#include <iostream> 
using namespace std;

int main() {
	int num;


	while (true) { //starts an infinite loop
		cout << "Please provide a number: ";
		cin >> num;


		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid: Not an integer!" << endl;
		}
		else {
			cout << "You entered this integer: " << num << endl;
			break;
		}
	}

	return 0;
}