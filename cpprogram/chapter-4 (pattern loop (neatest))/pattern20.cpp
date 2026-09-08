// square or rectangle

// a b c
// a b c
// a b c

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
                cout<<(char)(j+96)<<" ";
             }

             cout<<endl;
             
          }
       
    return 0;
  }