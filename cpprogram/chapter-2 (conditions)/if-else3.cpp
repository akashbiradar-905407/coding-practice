// if-else
// Take integer input and print absolute value of taht integer 

#include <iostream>
  using namespace std;

  int main(){

      int n;

      cout<<"Enter n number: ";
      cin>>n;

      if (n>=0)
        {
          cout<<n<<endl;
        }
      else 
       {
         cout<<-n;
       }

    return 0;
  }