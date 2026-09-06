// Triangle ulta

// * * * *
// * * *
// * *
// *

// use condition (j <= n+1-i)

#include <iostream>
 using namespace std;

 int main() {

  int n;

 cout<<"Enter n rows: ";
 cin>>n;



 for (int i = 1; i <= n; i++)       // rows  move down  |
 {                                  //                  |

  for (int j = 1; j <= n+1-i; j++)      // colums move ------>
 
    {
       cout<<"*"<<" ";
    }
    
    cout<<endl;
 }

 return 0; 
 }