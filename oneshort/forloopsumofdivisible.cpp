// Find the sum of numbers divisible by 5 between 1 and n

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;

          int sum = 0;

     for (int i = 1; i <= n; i++)
             {
                
               if(i%5==0)
                   {
                          cout<<i<<" ";
                          sum+=i;
                   }
              
              }
             cout<<endl;
             cout<<"sum = "<<sum;
             
     return 0;
 
   }