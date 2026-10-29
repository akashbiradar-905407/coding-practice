//

#include<iostream>
  using namespace std;

  #include<iostream>
  using namespace std;

  class scooty{ 

 public :

    int topspeed;
    float mileage;

    virtual void sound(){
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

   class superbike : public scooty{

          void sound(){
            cout<<"zroom zroom"<<endl;
          }
   };

  int main(){

   scooty* b = new bike();
     b->sound();
   scooty* c = new superbike();
     c->sound();
   
  }