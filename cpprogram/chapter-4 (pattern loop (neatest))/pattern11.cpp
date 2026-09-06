// pattern triangle (j) and (j+64)

// 1
// AB
// 123
// ABCD
// 12345

#include <iostream>
 using namespace std;

 int main() {

  int n;

 cout<<"Enter n rows: ";
 cin>>n;



 for (int i = 1; i <= n; i++)       // rows  move down  |
 {                                  //                  |

  for (int j = 1; j <= i; j++)      // colums move ------>
 
  {

    if(i%2!=0)

       {
          cout<<j<<" ";
       } 
    
    else
          {
            cout<<(char)(j+64)<<" ";
          }
       
  }
    cout<<endl;
 }

 return 0; 
 }