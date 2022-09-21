#include <iostream>
using namespace std;

int main() {
    int num;

    //  Ask user input
    cout << "Enter an integer: ";
    cin >> num;

    // Keep asking for valid input until valid input is given
    while ( (num <= 0) || (num >= 10 ) ) {
        cout << "Enter a value between 0 and 10: ";
        cin >> num;
    }

    // print their input
    cout << num << endl;
    
}