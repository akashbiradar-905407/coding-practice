// compil : operator overloading 

// Fraction Class :  

#include<iostream>
  using namespace std;

  class fraction{

  public : 

    int num;
    int den;

    fraction (int num,int den){

        this->num = num;
        this->den = den;
    }

    void display(){

        cout<<num<<"/"<<den<<endl;
    }
}; 
  
int main(){

    fraction f1 (1,2);
    fraction f2 (1,3);

    f1.display();
    f2.display();

}
