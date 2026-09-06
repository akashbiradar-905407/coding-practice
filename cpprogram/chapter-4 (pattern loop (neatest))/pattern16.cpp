// Triangle 

// A B C D
// A B C
// A B
// A

// use condition at  (j <= n+1-j) and at printing (char)(j+64);

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
       cout<<(char)(j+64)<<" ";
    }
    
    cout<<endl;
 }

 return 0; 
 }