#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    int rdnum1, rdnum2, rdnum3;
    int total;
    float avg;

    srand(time(0));
    rdnum1 = rand() % 100;
    rdnum2 = rand() % 100;
    rdnum3 = rand() % 100;
    total = rdnum1 + rdnum2 + rdnum3;
    avg = total / 3;

    cout << "The random numbers are " << rdnum1 << "\t" << rdnum2 << "\t" << rdnum3 << endl;
    cout << fixed << setprecision(2);
    cout << "The average is " << avg << endl;
    
}