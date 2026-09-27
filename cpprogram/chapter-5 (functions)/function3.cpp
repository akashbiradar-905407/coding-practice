#include <iostream>
  using namespace std;

  int changeinvalue(int x , int y)  
  {
      x = 2;
      y = 4;
     cout<<x<<" "<<y<<endl;

    return 0;
  }
  int main(){
  
    int a = 5;
    int b = 10;

    

    cout<<a<<" "<<b<<endl;

    changeinvalue(a,b);

    cout<<a<<" "<<b<<endl;

 return 0;
  }