//  take 3 input and least of them

#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter 3 number: ";
    cin>>a>>b>>c;


    
      if (a<b and a<c)
      {
        cout<<"a is smallest";
      }
     else if (b<a and b<c)
    {
        cout<<"b is smallest ";
    }
     else
     {
        cout<<"c is smallest";
     }
    

    return 0;

}