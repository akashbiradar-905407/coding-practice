// Pointer with objects : 

#include<iostream>
 using namespace std;

class cricketer {

    public : 

    string name;
    int runs;
    float avg;

    cricketer(string name, int runs , float avg){

        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

int main(){

  cricketer c1 ("virat kholi",25000,55.3);
  
  cricketer* p1 = &c1;                 // <---- store Addres od c1

  cout<<p1<<endl;                // <--- print the Adress of c1

  cout<<(*p1).runs<<endl;          // <---- value of c1
  cout<<p1->runs<<endl;            // same for value

  cout<<c1.avg<<endl;

  (*p1).avg = 77.5;            // updating value of c1.avg

  cout<<c1.avg<<endl;

  p1->avg = 67.5;            // same updating value of c1.avg

  cout<<c1.avg<<endl;

}


