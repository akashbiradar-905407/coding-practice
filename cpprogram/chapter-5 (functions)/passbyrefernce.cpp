// pass by reference

// use '&'  <------ amperand opearater

#include <iostream>
  using namespace std;

  void swap(int& x, int& y)     // <---- here to use "&"
    {  
       int temp = x;
       x=y;
       y=temp;
      
    }

    int main(){

    int x,y;

    cout<<"Enter x and y: ";
    cin>>x>>y;
     
    cout<<x<<" "<<y<<endl;  // <--- print input of (x and y)

    swap(x,y);

    cout<<x<<" "<<y;        // <---- will swap accrounding to questions but use "&" in swap funtion
       
 }