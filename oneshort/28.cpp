// (x, y) axis: 1st, 2nd, 3rd, 4th quadrants,
// x-axis, y-axis, or origin (0,0)

#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter x-axis: ";
    cin >> x;

    cout << "Enter y-axis: ";
    cin >> y;

    if (x == 0 && y == 0)
    {
        cout << "Origin";
    }
    else if (x == 0 && y > 0)
    {
        cout << "Y-axis";
    }
    else if (x == 0 && y < 0)
    {
        cout << "Y-axis (negative side)";
    }
    else if (y == 0 && x > 0)
    {
        cout << "X-axis";
    }
    else if (y == 0 && x < 0)
    {
        cout << "X-axis (negative side)";
    }
    else if (x > 0 && y > 0)
    {
        cout << "1st quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout << "2nd quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << "3rd quadrant";
    }
    else
    {
        cout << "4th quadrant";
    }

    return 0;
}