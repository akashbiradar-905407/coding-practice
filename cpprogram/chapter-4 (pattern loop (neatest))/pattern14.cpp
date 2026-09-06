// Triangle ulta

// 1 1 1 1
// 2 2 2
// 3 3
// 4

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
       cout<<i<<" ";
    }
    
    cout<<endl;
 }

 return 0; 
 }