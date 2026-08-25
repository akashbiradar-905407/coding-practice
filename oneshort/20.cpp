//positive integer input and check divisible by 5 and 3...
// both uses and , or...

#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"enter no: ";
    cin>>n;
     
    if(n%5==0 or n%3==0)
    //if (n%5==0 and n%3==0)
    {
        cout<<"yes divisible by 5 and 3";
    }
    
  else
   {
    cout<<"No divisible by 5 and 3";
   }

    return 0;

}