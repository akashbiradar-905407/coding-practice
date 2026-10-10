// method-2
// without extra parameters just swap work and call

#include<iostream>
  using namespace std;

  void print(int n){

    if(n==0) return;         // <--- Base case (condition)
    print(n-1);              // <--- call
    cout<<n<<endl;           // <--- work

  }

  int main(){


    int n;

    cout<<"Enter nth term:";
    cin>>n;

    print(n);

    return 0;
  }