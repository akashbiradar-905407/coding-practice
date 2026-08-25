//if cp and sp ....

#include <iostream>
using namespace std;

int main(){

    int cp;

    cout<<"Enter cp: ";
    cin>>cp;
    
    int sp;

    cout<<"Enter sp: ";
    cin>>sp;

    if (sp>cp)
    {
        cout<<" profit: ";

    }
    else if (cp>sp)
    {
        cout<<"Loss:";

    }

    else
          {
            cout<<"no profit and no loss";
          }   
    

    return 0;

}