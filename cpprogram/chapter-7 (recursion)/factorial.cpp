// make a function which calculate the factorial of n using recursion

// fact(n) = n*fact(n-1)
// base case : fact(1) = 1;

#include <iostream>
  using namespace std;

  int fact (int n){

    if(n==0||n==1) return 1;
    return n*fact(n-1);

 }

 int main(){

  int n;

  cout<<"Enter n: ";
  cin>>n;

  cout<<fact(n);



 }