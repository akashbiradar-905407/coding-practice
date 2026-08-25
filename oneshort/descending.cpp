// descending three numbers from small to large

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
            cout << c<<b<<a;
        }
        else
        {
            if (a < c)          // a < c < b
            {
                cout <<b<<c<<a;
            }
            else                 // c < a < b
            {
                cout << b<<a<<c;
            }
        }
    }
    else
    {
        if (b > c)              // c < b < a
        {
            cout <<a<<b<<c;
        }
        else
        {
            if (c > a)          // b < a < c
            {
                cout << c<<a<<b;
            }
            else                 // b < c < a
            {
                cout << a<<c<<b;
            }
        }
    }

    return 0;
}