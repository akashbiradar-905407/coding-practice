// find the sum of digits

// % 10  → TAKE the last digit
// / 10  → REMOVE the last digit

// int ld = n % 10;  // 1️⃣ Take
// sum += ld;        // 2️⃣ Add
// n /= 10;          // 3️⃣ Remove



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
                                  sum+=ld;

                                  n/=10;
                                  digits++;

                                 }

                           cout<<"Total digits: "<<digits<<endl;
                           cout<<"sum of all digit: "<<sum;







              }

               

                  


      return 0;
 
   }