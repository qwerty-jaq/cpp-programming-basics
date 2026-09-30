/*Validating String Input
Create a program that asks the user to enter their email address.
Validate that the input contains an '@' character and a '.' character. 
If the input is invalid, prompt the user to try again.
*/

#include <iostream> 
#include <string>
using namespace std;

bool isEmailValid(const string& email) {
	size_t atPosition = email.find('@');
	size_t dotPosition = email.find('.');
	return atPosition != string::npos &&
		   dotPosition != string::npos &&
		   atPosition < dotPosition;
}

int main() {
	string email;

	while (true) {
		cout << "Please enter your email address: ";
		getline(cin, email);

		if (isEmailValid(email)) {
			cout << "Email valid: " << email << endl;
			break;//exists the loop if the email is valid
		}
		else {
			cout << "Invalid Email, Please try again: \n";
		}
	}

	return 0;
}