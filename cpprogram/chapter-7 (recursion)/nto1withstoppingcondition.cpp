// using stoping loop condition--
//                     -Base case(condition)

#include<iostream>
  using namespace std;

  void print(int n){

    if(n==0) return;         // <--- Base case (condition)
    cout<<n<<endl;           // <--- work
    print(n-1);              // <--- call


  }

  int main(){


    int n;

    cout<<"Enter nth term:";
    cin>>n;

    print(n);

    return 0;
  }