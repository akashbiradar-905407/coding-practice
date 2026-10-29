// multi-level inheritance 

#include<iostream>
 using namespace std;


 // PARENT CLASS
 class vehicls{              

  public :
    
    int topspeed;
    float mileage;
    string fuel;
};

 // CHILD CLASS

 class twowheeler : public vehicls{

  public : 

};

 // CHILD CLASS

 class fourwheeler : public vehicls{

  public : 

};

// Grandchild class:
class scooty : public twowheeler{

  public : 

};

// Grandchild class:
class bike : public twowheeler{

  public : 

};

  int main (){

   vehicls v1;

     v1.topspeed = 150;
     v1.mileage = 12.5;
     v1.fuel = "xyz";

     cout<<v1.topspeed<<" "<<v1.mileage<<" "<<v1.fuel<<endl;

  }