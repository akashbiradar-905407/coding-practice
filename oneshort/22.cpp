// 3 positive integers input and print the gratest of them

#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter 3 number: ";
    cin>>a>>b>>c;


    
      if (a>b and a>c)
      {
        cout<<"a is gretest";
      }
     else if (b>a and b>c)
    {
        cout<<"b is gretest ";
    }
     else
     {
        cout<<"c is gretest";
     }
    

    return 0;

}