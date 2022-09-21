#include <iostream>
using namespace std;

int main()
{
    // Take 5 user inputs, get sum of all input values
    int num, sum;
    int i; // loop control value; lcv

    i = 0;
    while ( i < 5 ) { // this determines how many times the loop will run
        cin >> num;
        sum += num;
        i += 1;
    }
    cout << "Total: " << sum << endl;
}