// numbers tringle revers

//       A
//     A B
//   A B C
// A B C D

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
                    cout<<" "<<(char)(j+64);
                 }

            cout<<endl;
            
          }
        
       
    return 0;
   }