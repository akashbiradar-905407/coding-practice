// continue use in loops

#include <iostream>
 using namespace std;

 int main(){

//   int n;

//   cout<<"Enter n: ";
//   cin>>n;

  for (int i = 0; i<= 20; i++)
  {
    if (i==2) continue;
    if (i==3) continue;

    cout<<i<<" ";
    
  }
  

  return 0;
 }