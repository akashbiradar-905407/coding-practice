// take 3 input and tell they are side of triangle

#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"enter a,b,c:";
    cin>>a>>b>>c;

    if ((a+b)>c and (b+c)>a and (a+c)>b)
    {
        cout<<"yes side of triangle";
    }
    else{
        cout<<"no side of triangle";
    }

    return 0;

}