// Value Allocation using Class and objects :
 

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
  cricketer* c2 = new cricketer ("Rohit sharma" , 18000 , 47.5);

  cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
  cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
  
}
