

#include <iostream>
using namespace std;

int main() {

  int num1, num2, num3;
  cout << "Enter your numbers: ";
  cin >> num1 >> num2 >> num3;

  if (num1 > num2){
    if (num1 > num3) 
      cout << num1 << " is the Greatest number\n";
	  else
      cout << num3 << " is the Greatest number\n";
  }
	else{
      if (num2 > num3)
      cout << num2 << " is the Greatest number\n";
		else 
      cout << num3 << " is the Greatest number\n";
		  
    }
}