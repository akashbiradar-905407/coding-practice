// if-else
// Take positive integer input and tell if it is divisible by 5 or not. 

#include <iostream>
  using namespace std;

  int main(){

      int n;

      cout<<"Enter n number: ";
      cin>>n;

      if (n%5==0)
        {
          cout<<"yes"<<endl;
        }
      else 
       {
         cout<<"no";
       }

    return 0;
  }