// find uppercase or lowercase char

#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase";
    }
    else
    {
        cout << "Not an alphabet";
    }

    return 0;
}