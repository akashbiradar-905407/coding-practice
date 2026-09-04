// count how many odd digits of number..

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
     int original = n;     
     int digits = 0;
     
         while (n!=0)
            {
               int ld = n%10;
                     
               n/=10;

               if (ld%2!=0)
                        {
                           digits++;
                         }
                         
        }
        
              cout<<"Total digits = "<<digits;  
         


     return 0;
 
   }
