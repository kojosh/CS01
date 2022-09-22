#include <iostream>
using namespace std;

int main()
{
  // Declare variables
  int choice;
  double radius, length, width, base, height;
  double areaC, areaR, areaT;
  // Print the choices
  cout << "Geometry Calculator" << endl;
  cout << "\t" << "1. Calculate the Area of a Circle" << endl;
  cout << "\t" << "2. Calculate the Area of a Rectangle" << endl;
  cout << "\t" << "3. Calculate the Area of a Triangle" << endl;
  cout << "\t" << "4. Quit" << endl;
  cout << "\t" << "Enter your choice (1-4): ";
  cin >> choice;

  // If statements for circle
  if ( choice == 1 ) {
    cout << "Enter radius of your circle: ";
    cin >> radius;
    if ( radius < 0 ) {
      do {
        cout << "Enter a positive value: ";
        cin >> radius;
    }
        while ( radius < 0 );
    }
    areaC = radius * 3.14159;
    cout << "The area of your circle is " << areaC << endl;
  }

  // If statements for rectangle
  if ( choice == 2 ) {
    cout << "Enter length and width of your rectangle: ";
    cin >> length >> width;
    if (( length < 0 ) || ( width < 0 )) {
      do {
        cout << "Enter positive values: ";
        cin >> length >> width;
        }
        while (( length < 0 ) || ( width < 0 ));
    }
    areaR = length * width;
    cout << "The area of your rectangle is " << areaR << endl;
  }

  // If statements for Triangle
  if ( choice == 3 ) {
    cout << "Enter the base and height of your triangle: ";
    cin >> base >> height;
    if (( base < 0 ) || ( height < 0 )) {
      do {
        cout << "Enter positive values: ";
        cin >> base >> height;
        }
        while (( base < 0 ) || ( height < 0 ));
    }
    areaT = base * height * 0.5;
    cout << "The area of your triangle is " << areaT << endl;
  }

  // If statements for quit
  if ( choice == 4 ) {
    cout << "Program Stopped" << endl;
    exit(0);
  }

  // Input validation
  if (( choice < 1 ) || ( choice > 4 )) {
    cout << "Wrong number" << endl;
  }
    
}