// using "virtual" : 

#include<iostream>
  using namespace std;

  #include<iostream>
  using namespace std;

  class scooty{ 

 public :

    int topspeed;
    float mileage;

    void sound(){
        cout<<"vroom vroom"<<endl;
    }

  private :
  
     int bootspace;
  };

  
  class bike : public scooty{
  
    public :

    int gears;

    void sound(){

        cout<<"dhroom dhroom"<<endl;
    }

  };

  int main(){

   scooty* b = new bike();
     b->sound();

}