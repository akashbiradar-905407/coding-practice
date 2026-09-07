// check whether point lie in side a circle 

#include <iostream>
using namespace std;

int main()
{
    int x, y, r;
     
    cout<<" Enter x,y and radius:";
    cin >> x >> y >> r;

    if (x * x + y * y <= r * r)
    {
        cout << "Point is inside or on the circle";
    }
    else
    {
        cout << "Point is outside the circle";
    }

    return 0;
}