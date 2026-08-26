// display this GP-1,2,4,8,16,32......upto 'n' time


#include <iostream>
  using namespace std;

  int main(){

     int n;

     cout<<"Enter n: ";
     cin>>n;
      
    // using Method--2

    int a = 1;

    for (int i = 1; i <=n; i++)
    
    {  
        

      cout<<a<<" ";     
        
      a=a*2;                          
        
        }

     return 0;
    }