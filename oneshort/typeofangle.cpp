//Determine the type of angle (acute, right, or obtuse).


#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter Angle: ";
    cin >> a;

    if (a > 0 && a < 90)
    {
        cout << "Acute angle";
    }
    else if (a == 90)
    {
        cout << "Right angle";
    }
    else if (a > 90 && a < 180)
    {
        cout << "Obtuse angle";
    }
    else
    {
        cout << "Invalid angle";
    }

    return 0;
}