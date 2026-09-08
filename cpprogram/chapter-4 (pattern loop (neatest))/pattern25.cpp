// numbers tringle revers

//       1
//     1 2
//   1 2 3
// 1 2 3 4

#include <iostream>
  using namespace std;

  int main(){

       int m;

       cout<<"Enter m: ";
       cin>>m;
       
       for (int i = 1; i <= m; i++)
          {
             for (int k = 1; k <= m-i; k++)

                {
                   cout<<" "<<" ";  
                }

             for (int j = 1; j <= i; j++)

                 {
                    cout<<" "<<j;
                 }

            cout<<endl;
            
          }
        
       
    return 0;
   }