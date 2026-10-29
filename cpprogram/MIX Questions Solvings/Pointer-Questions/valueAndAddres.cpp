// Question 1: Print Value and Address

#include<iostream>
  using namespace std;

  int main(){

    int x = 4;

    int* ptr = &x;

   cout<<ptr<<endl;
   cout<<*ptr<<endl;


  }