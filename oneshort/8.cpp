// modulus opertor....
#include <iostream>
using namespace std;

int main(){

    int a,b;

    cout<<"Enter two no: ";
    cin>>a>>b;

    cout<<a%b<<endl;
    cout<<a%a<<endl;
    cout<<a%(-b)<<endl;        // we can't use float,double
    cout<<(-a)%b;
    


    return 0;
}

 