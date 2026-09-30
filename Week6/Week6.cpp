/*#include <iostream>
#include <fstream>

using namespace std;

int main() {

	//making file and appending the file
	ofstream ofile;
	ofile.open("diary.txt");
	if (ofile.is_open()) {


		cout << "I am happy today!\n";
		ofile << "Today I am very happy!\n";
		ofile.close();
	}
	else {
		cout << "Issues with opening the file\n";
	}
}*/


//write a program that reads 10 numbers from the user, if the number is even then it must be written into the even.txt, same for odd with odd.txt

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ofstream evenFile("even,txt");
	ofstream oddFile("odd.txt");

	if (!evenFile.is_open() || !oddFile.is_open()) {
		cout << "Error with opening files!\n";
		return 1;
	}

	int number;
	cout << "Enter 10 numbers: \n";

	for (int i = 0; i < 10; i++) {
		cout << "Number " << (i + 1) << ": ";
		cin >> number;

		if (number % 2 == 0) {
			evenFile << number << endl;
		}
		else {
			oddFile << number << endl;
		}
	}

	

	evenFile.close();
	oddFile.close();

	cout << "Even numbers written to even.txt and odd numbers to odd.txt\n";


	ifstream evenFileIn("even.txt");
	cout << "\nEven numbers are:\n";
	while (evenFileIn >> number) {
		cout << number << " ";
	}
	evenFileIn.close();


	ifstream oddFileIn("odd.txt");
	cout << "\nOdd numbers are:\n";
	while (oddFileIn >> number) {
		cout << number << " ";
	}
	oddFileIn.close();


	cout << endl;


	return 0;

}

//Using C++, create a program that uses an array to store the sales figures of 5 products. The program should ask the user to enter the sales figures for each product, calculate the total sales, and then display the total and the individual sales of each product.
//Make sure the program uses a loop to input the sales figures and another loop to display the results.

#include <iostream>
#include <string>
using namespace std;

int main() {
	const int NUM_PRODUCTS = 5;
	double sales[NUM_PRODUCTS];
	double	totalSales = 0.0;

	cout << "Enter the sales figures for " << NUM_PRODUCTS << " products:\n";
	for (int i = 0; i < NUM_PRODUCTS; i++) {
		cout << "Product " << (i + 1) << ": ";

	}
}
