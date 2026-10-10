// How recursion work
// repetition
// infinite time loop run untill stop

// Example : print n to 1

#include<iostream>
  using namespace std;

  void print(int n){

    cout<<n<<endl;
    print(n-1);


  }

  int main(){


    int n;

    cout<<"Enter nth term:";
    cin>>n;

    print(n);

    return 0;
  }