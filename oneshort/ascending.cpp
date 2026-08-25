
// arrande small to large
// Arrange three numbers from small to large

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a < b)
    {
        if (b < c)              // a < b < c
        {
            cout << a << " " << b << " " << c;
        }
        else
        {
            if (a < c)          // a < c < b
            {
                cout << a << " " << c << " " << b;
            }
            else                 // c < a < b
            {
                cout << c << " " << a << " " << b;
            }
        }
    }
    else
    {
        if (b > c)              // c < b < a
        {
            cout << c << " " << b << " " << a;
        }
        else
        {
            if (c > a)          // b < a < c
            {
                cout << b << " " << a << " " << c;
            }
            else                 // b < c < a
            {
                cout << b << " " << c << " " << a;
            }
        }
    }

    return 0;
}