// print ( i ) 
// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3

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
     cout<<i<<" ";
  }
    cout<<endl;
 }

 return 0; 
 }