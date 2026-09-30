/*Using a Post-Test Loop to Validate Input
Write a program that uses a do-while loop to ask the user for a password. 
The password must be exactly 8 characters long. 
Keep asking until the user enters a valid password.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;

	do {
		cout << "Please enter a password (exactly 8 characters): ";
		cin >> password;

		if (password.length() != 8) {
			cout << "Error: password incorrect, please try again\n";
		}
	} while (password.length() != 8);

	cout << "Password Accepted." << endl;
	cout << "Your password is: " << password << endl;

	return 0;

}