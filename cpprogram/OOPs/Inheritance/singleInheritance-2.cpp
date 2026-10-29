// single inheritance;

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

 class car : public vehicls{

  public : 

        bool sunroof;
};

 // CHILD CLASS

 class truck : public vehicls{

  public : 

};

  int main (){
    
   vehicls v1; 
     v1.topspeed = 150;
     v1.mileage = 12.5;
     v1.fuel = "xyz";

     cout<<v1.topspeed<<" "<<v1.mileage<<" "<<v1.fuel<<endl;


  }