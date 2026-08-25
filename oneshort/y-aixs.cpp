// check (0,y)


#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cout << "Enter x,y: ";
    cin >> x >> y;

    if (x == 0)
    {
        cout << "Point lies on y-axis";
    }
    else
    {
        cout << "Point does not lie on y-axis";
    }

    return 0;
}