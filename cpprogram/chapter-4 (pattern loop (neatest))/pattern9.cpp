// pattern triangle (j+64)

// A
// AB
// ABC
// ABCD

#include <iostream>
 using namespace std;

 int main() {

  int m;

 cout<<"Enter m rows: ";
 cin>>m;

//  int n;

//  cout<<"Enter n colums: ";
//  cin>>n;

 for (int i = 1; i <= m; i++)       // rows  move down  |
 {                                  //                  |

  for (int j = 1; j <= i; j++)      // colums move ------>
  {
     cout<<(char)(j+64)<<" ";       // typecasting   
  }
    cout<<endl;
 }

 return 0; 
 }