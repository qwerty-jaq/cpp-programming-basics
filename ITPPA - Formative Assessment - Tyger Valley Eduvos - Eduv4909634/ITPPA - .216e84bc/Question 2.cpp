#include <iostream>
#include <fstream>
#include <string>
using namespace std;


//constants for discount and threshold 
const double DISCOUNT_RATE = 0.05;
const double DISCOUNT_THRESHOLD = 200.00;
const int NUM_ITEMS = 8; //number of items in store

struct Item {
	string name;
	double price;
};

//function - declaring items in the store
void initializeItems(Item items[]) {
	items[0] = { "Coffee", 15.00 };
	items[1] = { "Sandwich", 30.00 };
	items[2] = { "Salad", 25.00 };
	items[3] = { "Juice", 10.00 };
	items[4] = { "Muffin", 20.00 };
	items[5] = { "Pizza Slice", 35.00 };
	items[6] = { "Soup", 18.00 };
	items[7] = { "Burger", 40.00 };	
}

//function - display menu of items
void displayMenu(const Item items[]) {
	cout << "Menu:\n";
	for (int i = 0; i < NUM_ITEMS; i++) {
		cout << (i + 1) << ". " << items[i].name << " - R" << items[i].price << endl;
	}
}

//function - obtain customer's name
string getCustomerName() {
	string name;
	cout << "Please provide your name: \n";
	getline(cin, name);
	return name;
}

//function - calculate the total cost from items selected, as well as their quantities
double calculateTotalCost(const Item items[]) {
	int itemNumber, quantity;
	double totalCost = 0.0;

	cout << "Enter  item number (1-" << NUM_ITEMS << ") and the quantity (0 to exit): ";
	cin >> itemNumber;

	while (itemNumber != 0) {
		if (itemNumber < 1 || itemNumber > NUM_ITEMS) {
			cout << "Invalid number, please try again. \n";
		}
		else {
			cout << "Enter quantity: ";
			cin >> quantity;

			if (quantity < 1) {
				cout << "Invalid quantity, please try again. \n";
			}
			else {
				totalCost += items[itemNumber - 1].price * quantity;	
			}
		}

		cout << "Enter item number (1-" << NUM_ITEMS << ") and quantity (0 to exit): ";
		cin >> itemNumber;
	}

	return totalCost;

}

//function - if applicable, apply the discount
double applyDiscount(double totalCost) {
	if (totalCost > DISCOUNT_THRESHOLD) {
		cout << "5% discount applied!\n";
		return totalCost * (1 - DISCOUNT_RATE);
	}
	return totalCost;
}

//function - write the final bill to the text file
void writeBillToFile(const string &name, double totalCost, double finalCost) {

	ofstream outFile("ShoppingCartBill.txt");

	if (outFile.is_open()) {
		outFile << "Customer: " << name << endl;
		outFile << "Total Cost: R" << totalCost << endl;
		outFile << "Final bill after discount: R" << finalCost << endl;
		outFile.close();
		cout << "The bill has been written to ShoppingCartBill.txt\n";
	}
	else {
		cout << "Error: Could not open file.\n";
	}
}

//function - perform shopping process and return the final cost
double performShopping(Item items[], string& customerName) {
	initializeItems(items);		//initialize item details
	displayMenu(items);			//display the menu
	customerName = getCustomerName(); //get customer's name
	double totalCost = calculateTotalCost(items); //calculate total cost
	return applyDiscount(totalCost); //if necessary apply discount
}

//calling functions into main
int main() {
	Item items[NUM_ITEMS];
	string customerName;
	double finalCost = performShopping(items, customerName); //perform the shopping and obtain the final cost

	//display the final bill and write to file
	cout << "Final Bill after discount: R" << finalCost << endl;
	writeBillToFile(customerName, finalCost / (1 - DISCOUNT_RATE), finalCost); //write to file with the original and final costs

	return 0;
}