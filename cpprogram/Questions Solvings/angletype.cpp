// find the type of angle

#include <iostream>
using namespace std;

int main()
{
    int angle;

    cout<<"Enter angle:";
    cin >> angle;

    if (angle < 90)
    {
        cout << "Acute Angle";
    }
    else if (angle == 90)
    {
        cout << "Right Angle";
    }
    else
    {
        cout << "Obtuse Angle";
    }

    return 0;
}