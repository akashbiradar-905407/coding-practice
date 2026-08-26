// print the AP- 4,7,10,13,16,.........'n'


#include <iostream>
  using namespace std;

  int main(){

     int n;

     cout<<"Enter n: ";
     cin>>n;

    // Method--1

    //  for (int i = 4; i <=(3*n + 1); i+=3)
    //  { 

    //   cout<<i<<" ";     
         
        
    //  }

    //  return 0;
    // }


    // Method--3

    // for (int i = 1; i <=n; i++)
    //  { 

    //   cout<<(3*i+1)<<" ";     
         
        
    //  }

    //  return 0;
    // }

    //Method--3


    int a = 4;

    for (int i = 1; i <=n; i++)
    
    { 

      cout<<a<<" ";     
        
      a=a+3;                          
        
     }

     return 0;
    }