/*Hand Tracing a Program
Given the following C++ program, trace its execution manually to determine the output. 
After writing down the expected output, implement the program to verify your answer.
*/

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;
    while (x < y) {
        cout << "x: " << x << ", y: " << y << endl;
        x += 2;
        y -= 1;
    }
    cout << "Final values - x: " << x << ", y: " << y << endl;
    return 0;
}
//x will be 7 and y will be 9