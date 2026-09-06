// pattern ( j+64 )

// ABCD
// ABCD
// ABCD
// ABCD

#include <iostream>
 using namespace std;

 int main() {

  int m;

 cout<<"Enter m rows: ";
 cin>>m;

 int n;

 cout<<"Enter n colums: ";
 cin>>n;

 for (int i = 1; i <= m; i++)       // rows  move down  |
 {                                  //                  |

  for (int j = 1; j <= n; j++)      // colums move ------>
  {
     cout<<(char)(j+64)<<" ";         // typecasting for ascll values
  }
    cout<<endl;
 }

 return 0; 
 }