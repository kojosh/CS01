#include <iostream>
using namespace std;

int main()
{

    bool flag;

    flag = true;
    flag = false;
    
    short num1; // 2 bytes
    int num2;   // 4 bytes
    long num3;  // 4 bytes

    float f1;   // 4 bytes
    double f2;  // 8 bytes IEEE floating number representation
                // sign / exponent / mantissa
    
    cout << SHRT_MAX << endl;

    num1 = 32768;
    num1 = 32769;
    cout << num1 << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(num1) << endl;

}