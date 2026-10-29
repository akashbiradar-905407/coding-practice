// compil : operator overloading 

// Fraction Class :  

#include<iostream>
#include<algorithm>
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

    fraction add(fraction f) {

       int newNum = this->num * f.den + f.num * this->den;
       int newden = this->den * f.den;

       fraction ans(newNum, newden);
       return ans;

}

}; 
  
int main(){

    fraction f1 (1,2);
    fraction f2 (1,3);

    f1.display();
    f2.display();

    fraction f3 = f1.add(f2);
    f3.display();

}
