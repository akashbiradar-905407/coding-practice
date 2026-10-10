// updating string character in word

#include<iostream>
  using namespace std;

  int main(){

   string str = "aKash";

   cout<<str<<endl;   // <----- old string

   str[0] = 'A';      //  <-----  updating by indexing
   str[1] = 'k' ;     //

   cout<<str;         // <----- new string



  }