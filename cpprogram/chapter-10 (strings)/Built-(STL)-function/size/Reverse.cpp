// Reverse : use for reverse printing of string   

// ---> 1)Reverse(string_name.begin() , string_name.end()) :- for all string
// ---> 2)Reverse(string_name.begin() , string_name.begin()+_) :- 1st half revers





#include<iostream>
#include<string>
#include<algorithm>
  using namespace std;

  int main(){

     string str = "Raghav";

       cout<<str<<endl;

     reverse(str.begin(),str.end());          // <----- reverse all string
     
       cout<<str<<endl;

 }