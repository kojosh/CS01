#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num1;
    srand(time(0));

    num1 = rand() % 150;

    if (num1 > 100 )
        cout << num1 << " is greater than 100\n";
    else if (num1 > 50) // num1 > 50 and num1 <= 100
        cout << num1 << " belongs to second section\n";
    else // num1 <= 50 and num1 <= 0
        cout << num1 << " is between 0 and 50\n";
        
}