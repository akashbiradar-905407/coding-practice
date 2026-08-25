//check whether a point lies inside a circle.

#include <iostream>
 using namespace std;

 int main(){

   int x,y;

   cout<<"Enter the x,y: ";
   cin>>x>>y;

   int R;

   cout<<"Enter a radius of circle: ";
   cin>>R;
   

   if (((x*x) + (y*y))<=( R*R))
            
               {
                 cout<<" points lies in circle";
                }
   
    else
           {
                cout<<"invalid";

           }
   
   
     return 0;

}