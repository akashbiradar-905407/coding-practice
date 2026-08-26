// Breaks;

// WAP to find the height factor of a number 'n' (other than 'n' itself)
// eg --> 24 = 2,3,4,6,8,12,......24

// method--1
#include <iostream>
  using namespace std;

  int main(){

     int n;

     cout<<"Enter n: ";
     cin>>n;

     for (int i = 1; i <= n; i++)
     { 

      if (n%i == 0)
      {
        cout<<i<<" ";
      }
      
        
     }

     return 0;
    }