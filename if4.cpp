// This program takes three integers and prints them in descending order
#include <iostream>
using namespace std;

int main()
{
  // declare variables
  int num1, num2, num3;
  // ask for three integers
  cout << "Enter three integers: ";
  cin >> num1 >> num2 >> num3;

  // If statements
  if ( num1 < num2 ) {
    if ( num1 < num3 ) {
      if ( num2 < num3 ) {
        cout << num3 << " " << num2 << " " << num1 << endl;
      }
      else 
        cout << num2 << " " << num3 << " " << num1 << endl;
    }
    else
      cout << num2 << " " << num1 << " " << num3 << endl;
  }
  else {
    if ( num2 < num3 ) {
      if ( num3 < num1 ) {
        cout << num1 << " " << num3 << " " << num2 << endl;
      }
      else 
        cout << num3 << " " << num1 << " " << num2 << endl;
    }
    else
      cout << num1 << " " << num2 << " " << num3 << endl;
  }
  
}