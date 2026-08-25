// eles-if


#include <iostream>
using namespace std;

int main(){

    int p;

    cout<<"enter percentage: ";
    cin>>p;

    if (p>81 and p<100)
    {
        cout<<" very good";
    }
    else if (p>61)
    {
        cout<<" good";
    }
    else if (p>41)
    {
        cout<< "Avedrage";
    }
    
    else
        {
            cout<<"fail";
        }
      
    

    return 0;

}