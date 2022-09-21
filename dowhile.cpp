#include <iostream>
using namespace std;

int main() {
    int num;

    //  Ask user input
    // cout << "Enter an integer: ";
    // cin >> num;

    // Keep asking for valid input until valid input is given
    // minimum number of iterations for while statement is 0
    // minimum number of iterations for do while statement is 1
    do {
        cout << "Enter a value between 0 and 10: ";
        cin >> num;
    }
        while ( (num <= 0) || (num >= 10 ) ); // notice how the condition is stated at the end of the loop

    // print their input
    cout << num << endl;
    
}