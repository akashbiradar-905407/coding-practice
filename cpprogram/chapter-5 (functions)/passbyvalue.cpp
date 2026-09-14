// pass by value


#include <iostream>
  using namespace std;

  void swap(int x, int y)
    {  
       int temp = x;
       x=y;
       y=temp;
      
       cout<<x<<" "<<y<<" : ";        // <---- will swap accrounding to questions 
       
    }

    int main(){

    int x,y;

    cout<<"Enter x and y: ";
    cin>>x>>y;
     
    cout<<x<<" "<<y<<endl;  // <--- print input of (x and y)

    swap(x,y);

   cout<<x<<" "<<y<<endl;  // <--- will print int main (x and y) not from swap(x,y) functions
 }