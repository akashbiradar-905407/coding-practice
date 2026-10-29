// single inheritance :

#include<iostream>
  using namespace std;


  // PARENTS clASS
  class scooty{ 

 public :

    int topspeed;
    float mileage;

  private :
  
     int bootspace;
  };

  // CHILD CLASS
  class bike : public scooty{
  
    public :

    int gears;

  };

  int main(){

   bike b1;
     
   b1.topspeed = 180;
   b1.mileage = 12.5;
   b1.gears = 2;

    cout<<b1.gears<<" "<<b1.mileage<<" "<<b1.topspeed<<endl;

  }