// Nested-else-if

// Take input percentage of students and print then gretest of them grads accroding to marks 

#include <iostream>
  using namespace std;

  int main(){

      int n;

      cout<<"Enter marks number: ";
      cin>>n;

      if (n>81 and n<100)
         
            {
                 cout<<"very good";
               }
        if (n>61)
         
              {
                 cout<<"good";
               }

          if (n>41)
         
              {
                 cout<<"Average";
               }

          if (n<=40)
         
              {
                 cout<<"Fail";
               }

     return 0;
  }