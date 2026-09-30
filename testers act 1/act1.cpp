/*#include <iostream>
using namespace std;

int main() {

	int* arr;
	int size;
	cout << "enter the size of the class" << endl;
	cin >> size;
	arr = new int[size];

	for (int i =! 0; i < size; i++) {
		cout << "enter mark" << i + 1 << endl;
		cin >> arr[i];
	}
	cout << "List of marks" << endl;
	for (int i = 0; i < size; i++) {
		cout << "mark: " << i + 1 << arr[i] << endl;
	}
	delete[]arr;


	/*int* pnum = NULL;
	pnum = new int;
	cout << "Enter a number";
	cin >> *pnum;
	cout << *pnum;

	delete pnum;
	
	
		return 0;
}*/


/*Write a program that :
1.	Accepts n marks from the user and stores them in an array.
2.	Implements two functions :
	bubbleSortAsc() to sort the array in ascending order using Bubble Sort.
	selectionSortDesc() to sort the array in descending order using Selection Sort.*/

/*#include <iostream>
using namespace std;

int n;
int* arr;

void bubbleSortAsc(int size, int* list);
void selectionSortDesc(int size, int* list);


void bubbleSortAsc(int size, int* list) {

	cout << "Bubblesort: ";
	for (int i = 0, i < size - 1, i++)
	{
		for (int j = 0, j < size - 1, j++)
		{
			int temp,
				if (list[j] > list[j + 1])
				{

			}
		}
	}
}

int main() {
	

	cout << "Enter the number of marks: " << endl;
	cin >> n;
	arr = new int[n];
}*/


#include <iostream>
using namespace std;

int num;
int* arr;

void bubbleSortAsc(int size, int* list);
void selectionSortDesc(int size, int* list);

void bubbleSortAsc(int size, int* list) {

	cout << "BubbleSort: ";
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			int temp;
			if (list[j] > list[j + 1])
			{
				temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << list[i] << " ";
	}
}

void selectionSortDesc(int size, int* list) {

	cout << "SelectionSort: ";
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			int temp;
			if (list[j] < list[j + 1])
			{
				temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << list[i] << " ";
	}
}

int main() {
	cout << "Enter your number: ";
	cin >> num;

	arr = new int[num];

	for (int i = 0; i < num; i++) {
		cout << "Enter " << i + 1 << " in list: ";
		cin >> arr[i];
	}

	bubbleSortAsc(num, arr);

	cout << endl;

	selectionSortDesc(num, arr);

	delete[] arr;
	return 0;
}





























