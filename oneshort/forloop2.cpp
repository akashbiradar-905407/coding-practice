// display this AP-1,3,5,7,9,......upto 'n' time


#include <iostream>
  using namespace std;

  int main(){

     int n;

     cout<<"Enter n: ";
     cin>>n;
      
    
    // Method --1

    //  for (int i = 1; i<= (2*n-1); i+=2)
    //  { 

    //   cout<<i<<" ";     
         
        
    //  }

    //  return 0;
    // }

    // Method--2

    // for (int i = 1; i<= n; i++)
    //  { 

    //   cout<<(2*i-1)<<" ";     
         
        
    //  }

    //  return 0;
    // }

    // Method--3

    int a = 1;

    for (int i = 1; i <=n; i++)
    
    { 

      cout<<a<<" ";     
        
      a=a+2;                          
        
     }

     return 0;
    }