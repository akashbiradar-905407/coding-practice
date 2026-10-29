// find gretest from between two numbers

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter a and b: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " is greater";
    }
    else if (b > a)
    {
        cout << b << " is greater";
    }
    else
    {
        cout << "Both are equal";
    }

    return 0;
}