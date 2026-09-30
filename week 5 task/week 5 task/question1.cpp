/* Question 1: Sorting Marks Using Bubble Sort and Selection Sort


Write a program that :
1.	Accepts n marks from the user and stores them in an array.
2.	Implements two functions :
	bubbleSortAsc() to sort the array in ascending order using Bubble Sort.
	selectionSortDesc() to sort the array in descending order using Selection Sort.*/

#include <iostream>
#include <algorithm>  //for asthetics.
using namespace std;


//declaration of functions.
void bubbleSortAsc(int size, int* list);
void selectionSortDesc(int size, int* list);

//setting function for sorting in ascending order.
void bubbleSortAsc(int size, int* list) {
	cout << "BubbleSort: ";
	for (int i = 0; i < size - 1; i++) {
		bool swapped = false;  // Optimization to stop if already sorted.
		for (int j = 0; j < size - i - 1; j++) {
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]); //swap command used.
				swapped = true;
			}
		}
		if (!swapped) break;
	}
	for (int i = 0; i < size; i++) {
		cout << list[i] << " ";
	}
	cout << endl;
}

//setting function for sorting in descending order.
void selectionSortDesc(int size, int* list) {
	cout << "SelectionSort: ";
	for (int i = 0; i < size - 1; i++) {
		int maxIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (list[j] > list[maxIndex]) {
				maxIndex = j;
			}
		}
		if (maxIndex != i) {
			swap(list[i], list[maxIndex]);
		}
	}
	for (int i = 0; i < size; i++) {
		cout << list[i] << " ";
	}
	cout << endl;
}


//calling functions as well as prompting user for input.
int main() {
	int num;
	cout << "State the number of marks you wish to enter: ";
	cin >> num;

	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "Enter mark: " << i + 1 << ": ";
		cin >> arr[i];
	}

	bubbleSortAsc(num, arr);//calling 1st function.
	selectionSortDesc(num, arr);//calling 2nd function.

	delete[] arr;
	return 0;
}
