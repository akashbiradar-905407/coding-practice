// swap 2 numbers
// x = 2, y = 5; then x = 5, y = 2;

// method-1


 #include <iostream>
   using namespace std;

//   int swap(int x, int y)
//     {  
//        int temp = x;
//        x=y;
//        y=temp;
      
//        cout<<x<<" "<<y;

//        return 0;
       
//     }

//     int main(){

//     int x,y;

//     cout<<"Enter x and y: ";
//     cin>>x>>y;

//     swap(x,y);

//  }

// method-2

  int swap(int x, int y)
    {  
        x=x+y;
        y=x-y;
        x=x-y;
      
       cout<<x<<" "<<y;

       return 0;
       
    }

    int main(){

    int x,y;

    cout<<"Enter x and y: ";
    cin>>x>>y;

    swap(x,y);

 }