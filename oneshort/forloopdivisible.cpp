//Count how many numbers are divisible by 3 between 1 and n.

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;

          int count = 0;

     for (int i = 1; i <= n; i++)
             {
                
               if(i%3==0)
                   {
                          cout<<i<<" ";
                          count++;
                   }
              
              }
             cout<<endl;
             cout<<"count = "<<count;
     return 0;
 
   }