// find then gretest from three number

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is greatest";
    }
    else if (b > a && b > c)
    {
        cout << b << " is greatest";
    }
    else if (c > a && c > b)
    {
        cout << c << " is greatest";
    }
    else
    {
        cout << "Some numbers are equal";
    }

    return 0;
}