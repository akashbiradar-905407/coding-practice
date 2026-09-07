// if-else using (Multiple condition using &&/and , ||/or)

// Take integer input and print 3-digits 

#include <iostream>
  using namespace std;

  int main(){

      int n;

      cout<<"Enter n number: ";
      cin>>n;

      if (n>99 and n<1000)
        {
          cout<<"3-digits"<<endl;
        }
      else 
       {
         cout<<"no";
       }

    return 0;
  }