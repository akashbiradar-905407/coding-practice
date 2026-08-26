// display this GP-3,12,48......upto 'n' time


#include <iostream>
  using namespace std;

  int main(){

     int n;

     cout<<"Enter n: ";
     cin>>n;
      
    // using Method--2

    int a = 3;

    for (int i = 1; i <=n; i++)
    
    {  
        

      cout<<a<<" ";     
        
      a=a*4;                          
        
        }

     return 0;
    }