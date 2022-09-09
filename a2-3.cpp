
// Input: No user input (because we didn't learn it yet)
// Output: Total salary, or wages

// Step 1: Declare variables

// Step 2: Assign proper values to variables
// Regular wages = 40 * Regular Rate
// Overtime wage = overtime hours + overtime rate
// Wage = Regular wage + Overtime wage

// Step 3: Calculation
// hours = 50;
// regular_rate = 18.25
// overtime_rate = 27.78
// overtime_hours = hours - 40

// Step 4: Print
// total wage = regular_wage + overtime_wage
// print result


#include <iostream>
using namespace std;

int main()
{
    // Step 1: declare variables
    double regular_wage, overtime_wage, base_rate, overtime_rate, total_wage;

    // Step 2: Assign values to variables
    base_rate = 18.25;
    overtime_rate = 27.78;
    regular_wage = base_rate * 40;
    overtime_wage = overtime_rate * 10;

    // Step 3: Calculate
    total_wage = regular_wage + overtime_wage;

    // Step 4: Print result
    cout << total_wage << endl;
}