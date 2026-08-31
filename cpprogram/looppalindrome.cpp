// Check whether a number is a palindrome.

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
                     cout<<original<<"= is not palindrome ";
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
                
            if (original == revers)
                       {
                            cout<<original<<" = is palindrome";
                       }
                 else
                      {
                        cout<<original<<" = is not palindrome ";
                      }          


                    }
               
      return 0;
 
   }
