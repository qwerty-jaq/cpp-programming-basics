/*Question 2
Copying Contents from One File to Another
•	Task: Write a C++ program that reads the contents of a file named "source.txt" and copies it to another file named "destination.txt".
          After copying, display the content of "destination.txt" on the screen.
*/

#include <iostream> 
#include <fstream>
#include <string>

using namespace std;

int main2() {

    ifstream sourceFile("Source.txt");
    if (!sourceFile) {
        cerr << "Error with opening file!\n";
        return 1;
    }

    ofstream destinationFile("destination.txt");
    if (!destinationFile) {
        cerr << "Error with opening file!\n";
        return 1;
    }

    string line;
    while (getline(sourceFile, line)) {
        destinationFile << line << endl;
    }

    sourceFile.close();
    destinationFile.close();

    ifstream displayFile("destination.txt");
        if (!displayFile) {
            cerr << "Error with opening file!\n";
            return 1;
        }

    cout << "\nContents of 'destination.txt':\n";
    while (getline(displayFile, line)) {
        cout << line << endl;
    }

    displayFile.close();

    return 0;
}