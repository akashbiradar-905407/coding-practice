// age of 3 person , how is gretest...


#include <iostream>
using namespace std;

int main(){

    int ram,shyam,ajay;

    cout<<"Enter age: ";
    cin>>ram>>shyam>>ajay;

    if (ram >= shyam)
    {
        if (ram >= ajay)
        {
            cout<<"ram is gretest";
        }
        else
        {
            cout<<"ajay is gretest";
        }
    }
    else 
    {
        if (shyam >= ajay)
        {
            cout<<"shyam is gretest";
        }
        else
            {
              cout<<"ajay is gretest";  
            }
    }
    
    
      
    

    return 0;

}