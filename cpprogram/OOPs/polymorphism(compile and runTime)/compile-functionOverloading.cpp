// Function overloading and constructor overloading;

// (2) Function overloading

#include<iostream>
  using namespace std;

  class loading{

    public :
    
          void sum (string a, string b){

            cout<<a+b<<endl;

            }

           void sum (int a, int b){

            cout<<a+b<<endl;

            }

            void sum (int a, int b, int c){

            cout<<a+b+c<<endl;

            }
  };

  int main(){

    loading a;

       a.sum(5,8);
       a.sum(5,8,8);
       a.sum("raghav","garg");

}