// Using Functions : 


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

void change (cricketer* c){

   // (*c).avg = 77.5;            // updating value of c1.avg
    
     c->avg = 68.9;
}

int main(){

  cricketer c1 ("virat kholi",25000,55.3);
  
  cricketer* p1 = &c1;                 // <---- store Addres of c1

  cout<<p1<<endl;

 cout<<c1.avg<<endl;

  change(&c1);
  cout<<c1.avg<<endl;

}


