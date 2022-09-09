#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int males, females;
    float perM, perF;

    cout << "How many males are in your class? ";
    cin >> males;

    cout << "How many females are in your class? ";
    cin >> females;

    // Calculate percentages
    perM = static_cast<float>(males) / (males + females) * 100;
    perF = static_cast<float>(females) / (males + females) * 100;

    cout << fixed << setprecision(2);
    cout << "Percent male: " << perM << "%" << endl;
    cout << "Percent female: " << perF << "%" << endl;
    return 0;

}