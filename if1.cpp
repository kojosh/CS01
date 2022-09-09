#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int num1;
    srand(time(0));

    num1 = rand() % 100;

    if ( num1 % 2 ==0 )
        cout << num1 << " is an even number\n";
    else 
        cout << num1 << " is an odd number\n";
}