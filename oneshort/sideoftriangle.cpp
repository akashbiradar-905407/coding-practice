//Check whether three sides can form a triangle.
// in this 3-side are given (x,y,z),
//so we need to check can You need to check whether these three lengths can actually make a triangle.


#include <iostream>
  using namespace std;

  int main(){

  int x,y,z;

  cout<<"Enter lengths: ";
  cin>>x>>y>>z;

  if ((x+y)>z and (x+z)>y && (y+z)>x )
            {
                 cout<<"Three side form a triangle";
            }
  
      else
           {

            cout<<"invalid";

           }







    return 0;
  }