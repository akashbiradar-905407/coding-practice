// pop_back(): Remove last one character

//           BY using pop_back() we caqn Remove one last character from string.

#include<iostream>
 using namespace std;

 int main(){

    string str = "Raghavga";
 
      cout<<str<<endl;

      str.pop_back();               // Here Remove 'g' 
      
      cout<<str<<endl;

      str.pop_back();              // Here Remove 'a'

      cout<<str;

 }