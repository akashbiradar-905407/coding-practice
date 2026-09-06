// find the 1st digits of number..

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
          int original = n;
          int digits = 0;
          int revers = 0;
          

        if(n==0)
                   { 
                     cout<<"1-digits"<<endl;
                     cout<<"zero";
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


        int fd = revers%10;
                

        cout<<original<<" first digits is = "<<fd;        
                
                    }     
      return 0;
 
   }
