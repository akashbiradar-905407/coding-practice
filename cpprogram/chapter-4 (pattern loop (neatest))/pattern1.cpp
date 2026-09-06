// chapter pattern loops.

// rectangular pattern printing .

// rows  move down  |
//                  | 

// colums move ------>

// * * * * *
// * * * * *
// * * * * *

#include <iostream>
 using namespace std;

 int main() {

  int m;

 cout<<"Enter m rows: ";
 cin>>m;

 int n;

 cout<<"Enter n colums: ";
 cin>>n;

 for (int i = 1; i <= m; i++)
 {
  for (int j = 1; j <= n; j++)
  {
     cout<<"*"<<" ";
  }
    cout<<endl;
}

return 0; 
}