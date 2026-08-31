// wap to print factorial of n;
// if n=5 then 1!=1
            // 2!=2*1
            // 3!=3*2*1
            // 4!=4*3*2*1
            // 5!=5*4*3*2*1

#include <iostream>
 using namespace std;

 int main(){

  int n;

  cout<<"Enter n: ";
  cin>>n;
  
  int factorial;

 for(int a = 1; a <= n; a++)
 
 {

    factorial = 1;

    for (int i = a; i>=1; i--)

  {
    
    factorial = factorial * i;
    cout<<i<<"*";
  
  }
     cout<<endl;

  }
 
 cout<<"factorial: "<<factorial;

  return 0;
 }
