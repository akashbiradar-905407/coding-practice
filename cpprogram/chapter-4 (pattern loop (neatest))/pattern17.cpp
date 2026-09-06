// Triangle numbers

// 1
// 1 3
// 1 3 5
// 1 3 5 7

// use condition (j <= i)

#include <iostream>
 using namespace std;

 int main() {

  int n;

 cout<<"Enter n rows: ";
 cin>>n;



 {
    for (int i = 1; i <= n; i++)       // rows  move down  |
 {                                  //                  |

  for (int j = 1; j <= i; j++)      // colums move ------>
 
    {
       cout<<2*j-1<<" ";
    }
    
    cout<<endl;
 }

}


  cout<<endl;


{
    for (int i = 1; i <= n; i++)       // rows  move down  |
{                                  //                  |

int a = 1;

for (int j = 1; j <= i; j++)      // colums move ------>

{
    cout<<a<<" ";
    a+=2;
}

cout<<endl;
}

return 0; 
}

}