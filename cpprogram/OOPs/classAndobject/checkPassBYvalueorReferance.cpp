// Check : 
//          pass by value or pass by referances;

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

    void change( car& c){

        c.name = "Audi A8";              // pass by value without '&' ; 
                                        // BY using '&' <-- pass by referances;
    }

int main(){

     car c1;

          c1.name = "Honda city";
          c1.price = 1500000;
          c1.seats = 5;
          c1.type = "sedan";

     
         print(c1);               //
         change(c1);             //
         print(c1);             //   <----- call for function 

 }