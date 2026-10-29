//Question 2: Modify a Variable Using a Pointer

#include<iostream>
   using namespace std;

   int main(){

    int x = 10;

    int* ptr = &x;

    *ptr = 50;

    cout<<x<<endl;
    cout<<&x<<endl;


   }