#include <iostream>
#include <string>
using namespace std;

//function - user createAccount
void createAccount(string& name, int& accountNumber, double& balance) {
	cout << "\n--- Create Account ---\n";
	cout << "Enter your name: \n";
	cin.ignore();
	getline(cin, name);

	cout << "Enter your account number: \n";
	cin >> accountNumber;

	cout << "Enter the initial deposit amount (must be greater than 0): \n";
	cin >> balance;
	while (balance <= 0) {
		cout << "Initial deposit amount must be greater than 0!\n";
		cout << "Enter the initial deposit amount: \n";
		cin >> balance;
	}
	cout << "--- Account Created Successfully ---\n";
}


//function - user depositMoney
void depositMoney(double& balance) {
	cout << "\n--- Deposit Money ---\n";
	double deposit;

	cout << "Enter the amount that you would like to deposit:\n";
	cin >> deposit;
	while (deposit <= 0) {
		cout << "Deposit amount must be greater than 0!\n";
		cout << "Enter the amount you wish to deposit (must be greater than 0):\n";
		cin >> deposit;
	}
	balance += deposit;
	cout << "Deposit successful, New Balance: " << balance << endl;
}


//function - user withdrawMoney
void withdrawMoney(double& balance) {
	cout << "\n--- Withdraw Money ---\n";
	double withdrawal;

	cout << "Enter the amount that you would like to withdraw (must be greater than 0): \n";
	cin >> withdrawal;
	while (withdrawal <= 0 || withdrawal > balance) {
		if (withdrawal <= 0) {
			cout << "Withdrawal amount must be greater than 0!\n";
		}
		else if (withdrawal > balance) {
			cout << "Insufficient balance.\n";
		}
		cout << "Enter the amount you wish to withdraw: \n";
		cin >> withdrawal;
	}
	balance -= withdrawal;
	cout << "Withdrawal successful, New Balance: " << balance << endl;
}


//function - user checkBalance
void checkBalance(const double& balance) {
	cout << "\n--- Check Balance ---\n";
	cout << "Current balance: " << balance << endl;
}


//function - user displayAccountDetails
void displayAccountDetails(const string& name, const int& accountNumber, const double& balance) {
	cout << "Account Details:\n";
	cout << "Name: " << name << endl;
	cout << "Account Number: " << accountNumber << endl;
	cout << "Current Balance: " << balance << endl;
}


//calling functions into main (menu-driven loop)
int main() {
	string name;
	int accountNumber;
	double balance;

	createAccount(name, accountNumber, balance);

	int choice;
	do {
		cout << "\nMenu:\n";
		cout << "1. Deposit Money\n";
		cout << "2. Withdraw Money\n";
		cout << "3. Check Balance\n";
		cout << "4. Display Account Details\n";
		cout << "5. Exit\n";
		cout << "Enter option that you would like to choose: ";
		cin >> choice;

		switch (choice) {
		case 1: depositMoney(balance); break;
		case 2: withdrawMoney(balance); break;
		case 3: checkBalance(balance); break;
		case 4: displayAccountDetails(name, accountNumber, balance); break;
		case 5: cout << "Exiting the system, Thank You!\n"; break;
		default: cout << "Invalid option, try again please.\n"; break;
		}
	} while (choice != 5);

	return 0;
}