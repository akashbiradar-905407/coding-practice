//length and breath of rectangle , L and b is area > perimeter ..

#include<iostream>
using namespace std;

int main() {

    int L;

    cout<<"Enter Length: ";
    cin>>L;

    int B;

    cout<<"Enter Breath: ";
    cin>>B;

    int Area , perimeter;

    Area = L*B;
    perimeter = 2*(L+B); 
    
    if (Area > perimeter)
    {
        cout<<"Area is greather: ";
    }
    else
         cout<<"perimeter is greather: ";








    return 0;
}