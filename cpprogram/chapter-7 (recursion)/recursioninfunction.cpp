// RECURSION : function calling itself
// how recursion use in function or call it's self


//  this example for how recursion use in function or call it's self


#include <iostream>
  using namespace std;
   
  void greet(){

    cout<<"hey"<<endl;

    greet();

  }

  int main(){

  greet();



  }