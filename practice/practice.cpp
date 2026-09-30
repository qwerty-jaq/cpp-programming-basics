#include <iostream>
#include <string>
using namespace std;

int main() {

	string password;

	do {
		cout << "Please enter password foo Access:\n";
		cin >> password;
		if (password != "antero");
			cout << "Access DENIED!\n";
	} while (password = "antero");

	cout << "Access GRANTED!";

	return 0;

}