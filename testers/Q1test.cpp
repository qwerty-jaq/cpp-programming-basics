/*
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//declaration of constants (MENU)
const double DISCOUNT_RATE = 0.10; //discount of 10%
const double DISCOUNT_THRESHOLD = 100.00; //discount if bill total exceeds R100
const double COFFEE_PRICE = 15.00;
const double SANDWICH_PRICE = 30.00;
const double SALAD_PRICE = 25.00;
const double JUICE_PRICE = 10.00;
const double MUFFIN_PRICE = 20.00;
const double PIZZA_PRICE = 35.00;
const double SOUP_PRICE = 18.00;
const double BURGER_PRICE = 40.00;



int main() {

	//declaration of variables (customer name & surname)
	string name, surName;
	int numItems;
	double totalBill = 0.0, finalBill;


	//prompt user to enter their name and surname
	cout << "Please provide your name and surname:\n";
	cin >> name >> surName;

	//display the menu to the user
	cout << "Menu:\n";
	cout << "1. Coffee - R15.00\n";
	cout << "2. Sandwich - R30.00\n";
	cout << "3. Salad - R25.00\n";
	cout << "4. Juice - R10.00\n";
	cout << "5. Muffin - R20.00\n";
	cout << "6. Pizza Slice - R35.00\n";
	cout << "7. Soup - R18.00\n";
	cout << "8. Burger - R40.00\n";

	//prompt the user to select up to 8 items form the menu
	cout << "Enter the number of items that you would like to order (up to 8):\n";
	cin >> numItems;
	while (numItems < 1 || numItems > 8) {
		cout << "Invalid number of items selected! (select 1 - 8).\n";
		cin >> numItems;
	}

	//display the menu (with prices) to the user
	for (int i = 0; i < numItems; ++i) {
		int item;
		cout << "Select the items that you would like to buy (1 -8).\n";
		cin >> item;
		switch (item) {
		case 1: totalBill += COFFEE_PRICE; break;
		case 2: totalBill += SANDWICH_PRICE; break;
		case 3: totalBill += SALAD_PRICE; break;
		case 4: totalBill += JUICE_PRICE; break;
		case 5: totalBill += MUFFIN_PRICE; break;
		case 6: totalBill += PIZZA_PRICE; break;
		case 7: totalBill += SOUP_PRICE; break;
		case 8: totalBill += BURGER_PRICE; break;
		default: cout << "Invalid item number.\n"; --i; break;
		}
	}

	//apply a 10% discount if the total bill exceeds R100
	if (totalBill > DISCOUNT_THRESHOLD) {
		finalBill = totalBill - (totalBill * DISCOUNT_RATE);
		cout << "A 10% discount has been applied!\n";
	}
	else {
		finalBill = totalBill;
	}

	//display the total bill, with discount applied (if necessary), as well as final bill after discount
	cout << "Total bill : R" << totalBill << endl;
	cout << "Final bill after discount: R" << finalBill << endl;

	//write to text file
	ofstream outFile("CafeteriaBill.txt");
	if (outFile.is_open()) {
		outFile << "Customer: " << name << " " << surName << endl;
		outFile << "Final Bill: R" << finalBill << endl;
		outFile.close();
		cout << "The bill has been written to CafeteriaBill.txt.\n";
	}
	else {
		cout << "Error: Could not open file for writing.\n";
	}


	return 0;
} */ 



