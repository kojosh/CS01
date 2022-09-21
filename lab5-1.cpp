#include <iostream>
using namespace std;

int main() {
    int start, end;
    int i, cnt;

// State the numeric ASCII values for capital letters from start to end
    start = 65;
    end = 90;


    i = start; // begin at start ASCII value and repeat until reach the end value
    cnt = 0; // make a new line when the ASCII value is divisible by 16 (80)
    while (i <= end ) {
        cout << static_cast<char>(i) << " ";
        if ( ++cnt % 16 == 0 )
            cout << endl;
        i++;
    }
}