// find the last digits of number..

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
          
     int ld = n%10;

        cout<<"last digits is = "<<ld;
                      
     int digits = 0;
     
         while (n!=0)
            {
                n/=10;
                digits++;
            }
        
        cout<<endl;    

       cout<<"Total digits = "<<digits;  
         


     return 0;
 
   }
