// sum of odd number 1 to n;

#include <iostream>
 using namespace std;

 int main(){

int n; 

cout<<"Enter n: ";
cin>>n;

int sum = 0;

for (int i = 0; i <=n; i++)

 {
    if(i%2!=0)
       {
        cout<<i<<" ";
        sum+=i;
       }
 }

      cout<<sum;

 return 0;
 
}