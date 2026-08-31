// wap to print sum of all even number of digits....

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
          int digits = 0;
          
          int sum = 0;

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

                        if(n%2==0)
                                  {
                                    sum+=ld;
                                  }
    
                                  n/=10;    
                                  digits++;

                                 
                                }

                           cout<<"Total digits: "<<digits<<endl;
                           cout<<"sum of all digit: "<<sum;


              }

        return 0;
 
   }