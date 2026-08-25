// Nested if-else...
// same as 22 questions without and , or...
#include <iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter 3 number: ";
    cin>>a>>b>>c;

    if (a>=b)
    {
        if (a>=c)
        {
            cout<<" a is greatest";
        }
        else
        
        {
            cout<<"c is gretest";
        }
    }
    else 
    {
        if (b>=c)
        {
            cout<<"b is gretest";
        }
        else
            {
              cout<<"c is gretest";  
            }
    }
    
    
      
    

    return 0;

}