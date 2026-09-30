#include <iostream>
using namespace std;

int main() {

	//declaring the array as well as variables
	double scores[5];
	double total = 0;
	double average;

	//prompt user to input the scores
	for (int i = 0; i < 5; i++) {
		cout << "Enter the student's score " << i + 1 << ": " << endl;
		cin >> scores[i];
		total += scores[i];
	}

	//calculate the average score
	average = total / 5.0;

	//finding the highest and lowest scores
	double highest = scores[0];
	double lowest = scores[0];
	for (int i = 1; i < 5; i++) {
		highest = (scores[i] > highest) ? scores[i] : highest;
		lowest = (scores[i] < lowest) ? scores[i] : lowest;
	}

	//displaying the results
	cout << "Average score: " << average << endl;
	cout << "Highest score: " << highest << endl;
	cout << "Lowest score: " << lowest << endl;
	cout << "Scores in the order that they were entered: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << scores[i] << " ";
	}
	cout << endl;

	return 0;
}