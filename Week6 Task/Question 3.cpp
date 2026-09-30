/*Question 3
Counting Words in a File
•	Task: Write a C++ program that reads a file named "text.txt" and counts the total number of words in the file. 
          Display the word count to the user.
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main3() {

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