//Find the value of a^b using a loop.

#include <iostream>
 using namespace std;

 int main(){


    int a,b; 

          cout<<"Enter a and b: ";
          cin>>a>>b;

          int result = 1;

     for (int i = 1; i <=b; i++)
            
            {
               result = result * a;  
           
            }
             
                cout<<a<<"^"<<b<<"="<<result;

        return 0;
 
   }