// This program generates five random numbers under 100 and finds the minimum value out of the five.
#include <iostream>

using namespace std;

int main() 
{
    int numbers[5];
    int min;

    srand(time(0));

    for ( int i = 0; i < 5; i++ ) {
        numbers[i] = rand() % 100;
        if ((i == 0 ) || ( min > numbers[i])) // compact the code by combining the two conditions
            min = numbers[i];
    }
    for ( int v : numbers ) {
        cout << v << "\t";
    }
    cout << endl;
    cout << "min value is " << min << endl;

    // for ( int i = 0; i < 5; i++ ) {
    //     cout << numbers[i] << "\t";
    // }

    // Find minimum value
    // min = numbers[0]; // the first value generated is assumed to be minimum by default
    // for ( int i = 0; i < 5; i++ ) {
    //     if (min > numbers[i])
    //         min = numbers[i];
    // }

}