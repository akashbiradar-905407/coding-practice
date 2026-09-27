// updating  value of varible using pointer adderss

#include<iostream>
   using namespace std;

int main(){

   int x = 3;

   int* ptr = &x;

   cout<<x<<endl;

   *ptr = 5;

   cout<<x;

 return 0;
}
