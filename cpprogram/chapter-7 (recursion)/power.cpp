// make a function which calculates 'a' raised to the power 'b' using recursion

// pow(a,b) = a*pow(a,b-1)
 
#include<iostream>
  using namespace std;

  int power(int a, int b){

   if (b==0) return 1;
   return a*power(a,b-1);

  }

int main(){

   int a;

   cout<<"Enter base ";
   cin>>a;

   int b;

   cout<<"Enter power ";
   cin>>b;

   cout<<power(a,b);


   return 0;
  }