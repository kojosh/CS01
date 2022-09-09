#include <iostream>
using namespace std;

int main()
{
    //declare variables
    double regularPrice = 59.95, discountRate = 20, discountPercent, discountAmount, salesPrice;

    //calculation
    discountPercent = discountRate / 100;
    salesPrice = regularPrice - (regularPrice * discountPercent);
    discountAmount = discountPercent * regularPrice;
    
    //Print result
    cout << "Your total is $" << salesPrice << endl;
    cout << "You got " << discountRate << "% off your purchase" << endl;
    cout << "In other words, that's $" << discountAmount << " off!" << endl;
    
}