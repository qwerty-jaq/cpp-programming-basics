#include <iostream>
using namespace std;

int main() {

	const int NUM_PRODUCTS = 5;
	double sales[NUM_PRODUCTS];
	double totalSales = 0.0;

	cout << "Enter the sales figures for 5 products: " << endl;
	for (int i = 0; i < NUM_PRODUCTS; i++) {
		cout << "Enter sales for product " << i + 1 << ": ";
		cin >> sales[i];
		totalSales += sales[i];
	}

	cout << "\nSales figures for each product: " << endl;
	for (int i = 0; i < NUM_PRODUCTS; i++) {
		cout << "Product " << i + 1 << ": R" << sales[i] << endl;
	}

	cout << "\nTotal Sales: R" << totalSales << endl;

	return 0;
}