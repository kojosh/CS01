#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	string city;

	cout << "Enter your name: ";
	getline(cin, name);

	cout << "Enter your city: ";
	getline(cin, city);

	cout << "Name: " << name << endl;
	cout << "City: "<< city << endl;

}