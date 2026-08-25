// multiple condition using && (and) , ||(or)..
// 1. and(&&)
// find give number is 3 digits or not...

#include <iostream>
using namespace std;

int main(){


    int n;

    cout<<"Enter no: ";
    cin>>n;

    if (n>99 && n<1000)
    {
        cout<<" 3 digits number";

    }
     else
     { 
        cout<<" no 3 digits number ";
     }
    


    return 0;

}