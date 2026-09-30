#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

void ShowMenu();
void AddMovie();
void SearchForMovie();
void DisplayAllMovies();

ofstream OutputFile;
ifstream InputFile;

int main() {

	int optionChoice;
	string movieTitel, director, genre, availabilityStatus;

	do {
		cout << endl;
		ShowMenu();
		cout << endl;
		cout << "Please enter a choice\n";
		cin >> optionChoice;

		switch (optionChoice) {
		case 1:
			AddMovie();
			break;
		case 2:
			SearchForMovie();
			break;
		case 3:
			DisplayAllMovies();
			break;
		case 4:
			cout << "Exiting System!";
			break;
		}


	} while (optionChoice != 4);

	return 0;
}

void AddMovie() {
	string movieTitel, director, genre, availabilityStatus;

	OutputFile.open("Movies.txt", ios::app);
	if (OutputFile.is_open()) {
		cout << "Enter movie titel: ";
		getline(cin, movieTitel);
		cout << "Enter director: ";
		getline(cin, director);
		cout << "Enter genre: ";
		getline(cin, genre);
		cout << "Is this movie available? (y/n)";
		cin >> availabilityStatus;

		OutputFile << movieTitel << "#" << director << "#" << genre << "#" << availabilityStatus << endl;
		OutputFile.close();

		cout << "Movie added successfully!";
		cout << endl;

	}
	else {
		cerr << "Error: File does not exist!";
	}
}

void SearchForMovie() {

	string searchTitel;
	bool isfound = false;
	string titel, director, genre, availability;
	int movieCounter;
	int hashPosition;
	string lines;

	cout << "Enter movie titel to search";
	cin >> ws;
	getline(cin, searchTitel);

	InputFile.open("Movie.txt");
	if (InputFile.is_open()) {
		while (getline(InputFile, lines) && !isfound) {
			hashPosition = lines.find("#");
			titel = lines.substr(0, hashPosition);
			lines = lines.erase(0, hashPosition + 1);

			if (titel == searchTitel) {
				isfound = true;

				hashPosition = lines.find("#");
				director = lines.substr(0, hashPosition);
				lines = lines.erase(0, hashPosition + 1);

				hashPosition = lines.find("#");
				genre = lines.substr(0, hashPosition);
				lines = lines.erase(0, hashPosition + 1);

				availability = lines;

				cout << "Movie Found!\n";
				cout << endl;
				cout << "Titel: " << titel << endl;
				cout << "Director: " << director << endl;
				cout << "Genre: " << genre << endl;
				cout << "Availability: " << availability << endl;
				cout << endl;
			}
		}
		if (!isfound) {
			cout << "Movie not found. " << endl;
		}
		InputFile.close();
	}
	else {
		cerr << "Error: File could not open!\n";
	}
}

void DisplayAllMovies() {
	string titel, director, genre, availability;
	int movieCounter;
	int hashPosition;
	string lines;
	movieCounter = 0;

	InputFile.open("Movies.txt");
	if (InputFile.is_open()) {
		while (getline(InputFile, lines)) {
			hashPosition = lines.find("#");
			titel = lines.substr(0, hashPosition);
			lines = lines.erase(0, hashPosition + 1);

			hashPosition = lines.find("#");
			director = lines.substr(0, hashPosition);
			lines = lines.erase(0, hashPosition + 1);

			hashPosition = lines.find("#");
			genre = lines.substr(0, hashPosition);
			lines = lines.erase(0, hashPosition + 1);

			availability = lines;
			movieCounter += 1;

			cout << "Movie " << movieCounter << ":" << endl;
			cout << "Titel: " << titel << endl;
			cout << "Director: " << director << endl;
			cout << "Genre: " << genre << endl;
			cout << "Availability: " << availability << endl;
			cout << endl;
		}
	}
	else {
		cerr << "Error: File could not open\n";
	}
	InputFile.close();
}

void ShowMenu() {
	cout << "1. Add Movie\n";
	cout << "2. Search for a movie\n";
	cout << "3. View all movies\n";
	cout << "4. Exit\n";
}