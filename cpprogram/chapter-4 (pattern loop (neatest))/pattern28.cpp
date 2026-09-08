// star pyramid

//       *
//     * * *
//   * * * * *
// * * * * * * *

#include <iostream>
  using namespace std;

  int main(){

       int m;

       cout<<"Enter m: ";
       cin>>m;
       

       for (int i = 1; i <= m; i+=2)
          {
             for (int k = 1; k <= m-i; k++)

                {
                   cout<<" ";  
                }

             for (int j = 1; j <= i; j++)

                 {
                    cout<<" "<<"*";
                    
                 }

            cout<<endl;
            
          }
        
       
    return 0;
   }