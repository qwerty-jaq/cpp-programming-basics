#include <iostream>
#include <algorithm> //for asthetics./std::swap
using namespace std;

//function declaration to process array.
int processArray(int** arr, int m, int n) { //** = pointer to pointer = 2D array + m & n as integrals for rows & columns.

	//declaration of variables.
	int count = 0;
	int sumOfDifference = 0;

	for (int i = 0; i < m; i++) { //nested for loops.
		for (int j = 0; j < n; j++) { //run through each element of the array.
			if (arr[i][j] < 50) { //conditional check.
				count++;
				sumOfDifference += (50 - arr[i][j]); //If an element is less than 50, it increments the count & adds the difference from 50 to sumOfDifference.
			}
		}
	}

	cout << "Numbers less than 50: " << count << endl;
	return sumOfDifference;
}
int main() {

	int n, m;

	//prompt user to input the dimensions of the array.
	cout << "Enter the number of rows in the array: \n";
	cin >> m;
	cout << "Enter te number of columns in the array: \n";
	cin >> n;


	//dynamically allocate the 2D array.
	int** arr = new int* [m];
	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];
	}

	//prompt user for input.
	cout << "Enter the marks of the array: \n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	//process array to get results.
	int result = processArray(arr, m, n);

	//display the results.
	cout << "The sum of the difference: " << result << endl;

	//deallocate the dynamically allocated memory.
	for (int i = 0; i < m; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}