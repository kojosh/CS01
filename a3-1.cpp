#include <iostream>
using namespace std;

int main()
{
	int costA = 15;
	int costB = 12;
	int costC = 9;
	int numA, numB, numC;
	int total_income;

	cout << "Enter the number of seats were sold for class A, B and C";
	cin >> numA >> numB >> numC ;

	total_income = costA * numA + costB * numB + costC * numC;
	cout << "Total income : " << total_income << endl;
}