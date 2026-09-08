// Rhombus

// _ _ _ _ * * * *
// _ _ _ * * * *
// _ _ * * * *
// * * * *

#include <iostream>
  using namespace std;

  int main(){

       int m;

       cout<<"Enter m: ";
       cin>>m;
       
       for (int i = 1; i <= m; i++)
          {
             for (int k = 1; k <= m-i+1; k++)

                {
                   cout<<"-"<<" ";  
                }

             for (int j = 1; j <= m; j++)

                 {
                    cout<<" "<<"*";
                 }

            cout<<endl;
            
          }
        
       
    return 0;
   }