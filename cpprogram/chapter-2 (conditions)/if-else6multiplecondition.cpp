// if-else using (Multiple condition using &&/and , ||/or)

// Take integer input and print if integer divisible by 3 or 5 

#include <iostream>
  using namespace std;

  int main(){

      int n;

      cout<<"Enter n number: ";
      cin>>n;

      if (n%3==0 or n%5==0)
        {
          cout<<"yes"<<endl;
        }
      else 
       {
         cout<<"no";
       }

    return 0;
  }