#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream file("text.txt");
    if (!file) {
        cerr << "Error, could not open file!\n";
        return 1;
    }

    string word;
    int wordCount = 0;

    while (file >> word) {
        wordCount++;
    }

    file.close();

    cout << "Total number of word in the file: " << wordCount << endl;

    return 0;
}