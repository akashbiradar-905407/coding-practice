// revers of numbers
// n=1234 then n=4321;

// wap to print sum of all even number of digits....

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
          int digits = 0;
          int revers = 0;
          

        if(n==0)
                   { 
                     cout<<"1-digits"<<endl;
                     cout<<"sum: 0 ";
                   }
       
       else             
              {
                  while (n!=0)

                       {
                                  int ld = n%10;

                                  revers = revers*10;
                                  revers = revers+ld;

                                  n/=10;
                                  digits++;

                        }

                           cout<<"Total digits: "<<digits<<endl;
                           cout<<"Revers of digits: "<<revers;


                    }
               

                  


      return 0;
 
   }
