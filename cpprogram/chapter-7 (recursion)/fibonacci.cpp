// write a function to calculate the nth fibonacci number using recursion 

// Fibonacci : fibo(n) = fino(n-1) + fibo(n-2);
// Base case : fibo(1) = 1;
//             fibo(2) = 2;

#include<iostream>
   using namespace std;

   int fibo(int n){

      if(n==1||n==2) return 1;
      return fibo(n-1)+fibo(n-2);

    }

    int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<fibo(n);


   return 0;

    }