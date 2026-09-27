// storing address of pointer in new varible
//

#include<iostream>
   using namespace std;

int main(){

   int x = 3;
   
   int* ptr = &x;           // <------ here 'int*' is Data type of pointer

   cout<<&x<<endl;         // <------ '&' always before printing address of varible 'x'
   cout<<*ptr;             // <------  '*' always before varible of storing address of pointers for values

 return 0;
}
