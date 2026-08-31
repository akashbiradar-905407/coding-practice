// Count the number of digits in a number.  

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
          int digits = 0; 

        if(n==0)  
        
                  { 
                    
                    cout<<"1-digiti"; 
        
                   }
       
       else             


        while (n!=0)                 // <---- if n=1234 then go 4-3-2-1!-0 but not 0 stop at 1;
                  {

                    n=n/10;       // in this if remiander of n/10 != (not) 0 then count 1 if more then add +1 until 1st digitis > 0; 
                                  // n = 1234 Then n/10 -->
                    digits++;     // 1234 / 10 
                                  // 123.4   <-- 1 digit
                                  // 12.34   <--  1+1 = 2 digits
                                  // 1.234   <--  2+1 = 3 digits
                                  // 0.1234  <-- 3+1 = 4 digitds
                                  // 0     < digitis
                }                
     
           cout<<digits;     

       
               

    
      return 0;
 
   }