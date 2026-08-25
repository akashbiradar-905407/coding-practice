// Find whether a point lies inside a square.


#include <iostream>
     using namespace std;

     int main(){

      int s;

      cout<<"Enter sides s: ";
      cin>>s;

      int x,y;

      cout<<"Enter x,y: ";
      cin>>x>>y;


      if (x>=0 and x<=s)
                         {
                            if (y>=0 && y<=s)
                                             {
                                               cout<<"(x,y) lies in square ";
                                             }
                            else  
                                  {
                                    cout<<" not a square";
                                  }
                         }
      
         else
              {
                cout<<" invalid ";

              }


   return 0;

 }