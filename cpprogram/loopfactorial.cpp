// wap to print factorial of n;
// if n=5 then 5!=5*4*3*2*1

#include <iostream>
 using namespace std;

 int main(){

  int n;

  cout<<"Enter n: ";
  cin>>n;
  
  int factorial = 1;

 for (int i = n; i >=1; i--)

  {
    factorial = factorial * i;
    cout<<i<<"*";
  
  }

  cout<<endl<<"factorial: "<<factorial;

  return 0;
 }
