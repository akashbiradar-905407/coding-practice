// hollow rectangle

// * * * * * *
// *         *
// *         *
// * * * * * *

#include <iostream>
  using namespace std;

  int main(){

       int m;

       cout<<"Enter m: ";
       cin>>m;
       
       int n;

       cout<<"Enter n: ";
       cin>>n;

       

       for (int i = 1; i <= m; i++)
          {
             for (int j = 1; j <= n; j++)

                {
                    if ((i == 1 or i == m) || (j == 1 or j == n))
                         {
                           cout<<"* ";
                         }
                    else 
                         {
                            cout<<" "<<" ";
                         }
                }
            
                  cout<<endl;
            
          }
       
    return 0;
  }