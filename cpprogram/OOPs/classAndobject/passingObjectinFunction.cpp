// Classes and Objects :
//                       To creats own Data type ;
//
//   ----> To use all Data type(string,int,float) in one data type;

// Passing Object To Function : 

#include <iostream>
  using namespace std;

 class car {

    public:

      string name;
      int price;
      int seats;
      string type;

    };

    void print (car c){                 // <------ printing by functions 

     cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;


    }

int main(){

     car c1;

          c1.name = "Honda city";
          c1.price = 1500000;
          c1.seats = 5;
          c1.type = "sedan";

     car c2;

          c2.name = "Maqruti swift";
          c2.price = 700000;
          c2.seats = 5;
          c2.type = "sedan";     


         print(c1);              //
         print(c2);             //   <----- call for function 

 }