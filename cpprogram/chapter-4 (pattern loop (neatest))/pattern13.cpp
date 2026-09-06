// Triangle ulta

// 1 2 3 4
// 1 2 3
// 1 2
// 1

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
       cout<<j<<" ";
    }
    
    cout<<endl;
 }

 return 0; 
 }