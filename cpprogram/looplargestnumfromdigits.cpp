// find the largest digits from number..

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
     int largest = 0;     
     int digits = 0;
     
         while (n!=0)
            {
               int ld = n%10;
                     
               n/=10;
               digits++;

               if (ld > largest)
                        {
                           largest = ld;
                         }
                         
        }
        
              cout<<"Total digits = "<<digits<<endl;
              cout<<"largest digits is = "<<largest;  
         


     return 0;
 
   }
