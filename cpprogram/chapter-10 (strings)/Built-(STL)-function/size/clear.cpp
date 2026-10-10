// Clear() : Remove all sentence 

// By using claer() all words from string become = zero...

#include<iostream>
  using namespace std;

  int main(){

    string str = "Raghav Garg";

      cout<<str<<" "<<str.size();
      cout<<endl;

      str.clear();                       // <---- clear all string 

      cout<<str<<" "<<str.size();        // string become zero.
      cout<<endl;

      
 }