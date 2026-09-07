// find type of retangle

#include <iostream>
using namespace std;

int main()
{
    int l1, b1, l2, b2;

    cout<<"Enter lengths and breaths:";

    cin >> l1 >> b1;
    cin >> l2 >> b2;

    if (l1 == l2 && b1 == b2)
    {
        cout << "Equal Rectangles";
    }
    else
    {
        cout << "Not Equal";
    }

    return 0;
}