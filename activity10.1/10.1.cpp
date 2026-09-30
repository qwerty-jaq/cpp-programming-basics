#include <iostream>
using namespace std;

int main() {
	
	int score;

	cout << "Enter your test score (0-100): ";
	cin >> score;

	while (score < 0 || score > 100) {
		cout << "Invalid score, please try again: ";
		cin >> score;
	}

	cout << "Valid Score!" << score << endl;

	return 0;
}