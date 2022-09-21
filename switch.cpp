#include <iostream>
using namespace std;

int main () 
{
    int choice;
    cout << "Enter your choice; ";
    cin >> choice;

    // if (choice == 0)
    //     cout << "You entered 0\n";
    // else if (choice == 1)
    //     cout << "You entered 1\n";
    // else if (choice == 2)
    //     cout << "You entered 2\n";
    // else if (choice == 3)
    //     cout << "You entered 3\n";
    // else
    //     cout << "You entered greater than 3\n";
    
    switch(choice)
        {
            case 0:
                cout << "You entered 0\n";
                break;
            case 1:
                cout << "You entered 1\n";
                break;
            case 2:
                cout << "You entered 2\n";
                break;
            case 3:
                cout << "You entered 3\n";
                break;
            default:
                cout << "You entered greater than 3\n";
        }
    
}