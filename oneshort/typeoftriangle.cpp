//Determine the type of triangle.
// if give 3-lengths are 
// a,b,c and if a=b=c -> equilateral , if a=b!=c -> isosceles ,if a!=b!=c -> scalene
#include <iostream>
  using namespace std;

  int main(){

  int a,b,c;

  cout<<"Enter lengths: ";
  cin>>a>>b>>c;


if (a+b>c and a+c>b and b+c>a)
      
 {
    
   if (a==b and b==c)
           {
             cout<<"Equilateral";
           }
    else 
         {

          if ((a==b and a!=c )|| (b==c and b!=a) or (c==a && c!=b))
                {
                  cout<<"Isosceles";
                }
          else
               {
                cout<<"scalene";
               }
         }

  }

 else 
      {
          
        cout<<"not an triangle";

       }



    return 0;
  }