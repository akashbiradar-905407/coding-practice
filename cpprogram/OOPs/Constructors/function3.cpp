// Functionds in class :

//  3)

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

    void print(int a){

       cout<<name<<" "<<runs<<" "<<runs/avg<<endl;
       cout<<a<<endl;
    }
};

int main(){

  cricketer c1 ("virat kholi",25000,55.3);
  cricketer c2 ("Rohit sharma" , 18000 , 47.5);

 // c1.name = "sachin";


  c1.print(5);
  c2.print(9);

}
