// print : i to n

// method-1 (Taking extra parameters)

#include<iostream>
    using namespace std;

    void print(int x, int n){

      if(x>n) return;
      cout<<x<<endl;
      print(x+1,n);

    }

    int main(){

    int x;

    cout<<"Enter x ";
    cin>>x;                 // take x as 1

    int n;

    cout<<"Enter n ";
    cin>>n;

    print(x,n);     


 return 0;
 }
