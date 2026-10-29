// Classes and Objects :
//                       To creats own Data type ;
//
//   ----> To use all Data type(string,int,float) in one data type;

#include <iostream>
  using namespace std;

 class student {           // <---- creat own data type 

    public:

    string name ;
    int rno;
    float gpa;

};

int main(){

 student s1;

       s1.name = "Akash";
       s1.rno = 76;
       s1.gpa = 8.5;

  student s2;
       s2.name = "Raghav";
       s2.rno = 36;
       s2.gpa = 6.2;
       
       
      cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
      cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;


}
