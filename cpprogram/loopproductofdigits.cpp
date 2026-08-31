// find the products of digits

// % 10  → TAKE the last digit
// / 10  → REMOVE the last digit

// int ld = n % 10;  // 1️⃣ Take
// product*= ld;        // 2️⃣ multiplication
// n /= 10;          // 3️⃣ Remove



#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
          int digits = 0;
          
          int products = 1;

        if(n==0)
                   { 
                     cout<<"1-digits"<<endl;
                     cout<<"sum all digits: 0 ";
                   }
       
       else             
              {
                  while (n!=0)
                                {

                                  int ld = n%10;
                                  products*=ld;

                                  n/=10;
                                  digits++;

                                 }

                           cout<<"Total digits: "<<digits<<endl;
                           cout<<"products all digit: "<<products;


              }

               

                  


      return 0;
 
   }