// adavance adavance (1 loop ke andar 2 loops) 3rd loop == space printing

//star tringle revers

//       *
//     * *
//   * * *
// * * * *

#include <iostream>
  using namespace std;

  int main(){

       int m;

       cout<<"Enter m: ";
       cin>>m;
       
    //    int n;

    //    cout<<"Enter n: ";
    //    cin>>n;

       

       for (int i = 1; i <= m; i++)
          {
             for (int k = 1; k <= m-i; k++)

                {
                   cout<<" "<<" ";  
                }

             for (int j = 1; j <= i; j++)

                 {
                    cout<<" "<<"*";
                 }

            cout<<endl;
            
          }
        
       
    return 0;
   }