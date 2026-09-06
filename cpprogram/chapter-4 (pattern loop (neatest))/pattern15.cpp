// Triangle number

// 4
// 4 3
// 4 3 2
// 4 3 2 1

// use condition (j <= i) and at printing (n+1-j)

#include <iostream>
 using namespace std;

 int main() {

  int n;

 cout<<"Enter n rows: ";
 cin>>n;



 for (int i = 1; i <= n; i++)       // rows  move down  |
 {                                  //                  |

  for (int j = 1; j <= i  ; j++)      // colums move ------>
 
    {
       cout<<n+1-j<<" ";
    }
    
    cout<<endl;
 }

 return 0; 
 }