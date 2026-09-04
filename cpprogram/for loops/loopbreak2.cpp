
//  Breaks;

// WAP to find the height factor of a number 'n' (other than 'n' itself)
// eg --> 24 = 2,3,4,6,8,12,......24

// merthod --2

// using storing factor..



#include <iostream>
  using namespace std;

  int main(){

     int n;

     cout<<"Enter n: ";
     cin>>n;

     int f = 1;

     for (int i = 1; i < n; i++)          // also we can use (i <= n/2)
     { 

      if (n%i == 0)
    {
       f = i;
      
        cout<<f<<" ";
        
      }
          
         
        
     }

     return 0;
    }

    