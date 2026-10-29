// Compile;
//         using  operater "+";

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

    fraction operator+(fraction f) {

       int newNum = this->num * f.den + f.num * this->den;
       int newden = this->den * f.den;

       fraction ans(newNum, newden);
       return ans;

}
    fraction operator-(fraction f) {

       int newNum = this->num * f.den - f.num * this->den;
       int newden = this->den * f.den;

       fraction ans(newNum, newden);
       return ans;

}
    fraction operator*(fraction f) {

       int newNum = this->num * f.num;
       int newden = this->den * f.den;

       fraction ans(newNum, newden);
       return ans;

}
    fraction operator/(fraction f) {

         int newNum = this->num * f.den;
         int newden = this->den * f.num;

         fraction ans(newNum, newden);
        return ans;

}


       
}; 
  
int main(){

    fraction f1 (1,2);
    fraction f2 (1,3);

    f1.display();
    f2.display();

    fraction f3 = f1 + f2;
    f3.display();

    fraction f4 = f1 - f2;
    f4.display();

    fraction f5 = f1 * f2;
    f5.display();

    fraction f6 = f1 / f2;
    f6.display();

}


