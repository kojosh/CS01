#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double mealCharge = 88.67, tax = 6.75;
    double taxAmount, tipAmount;
    int tip = 20;
    double tipPercent = tip/100;

    // Calculate taxes and tips
    taxAmount = tax + mealCharge;
    tipAmount = tipPercent * taxAmount;

    // Print results
    cout << "Your total is $" << tipAmount + taxAmount << endl;

}