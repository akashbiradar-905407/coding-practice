// to_string() : 

//           --> use to make (integer --> string)

#include<iostream>
#include<string>
 using namespace std;

 int main(){

  int x = 12345;

     cout<<x<<endl;

   string str = to_string(x);       // <---- (int --> string)
   
      cout<<str;
}