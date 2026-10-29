// Constructors : 

#include <iostream>
 using namespace std;

 class student{                            //<------ class and object

    public : 

    string name;
    int rno;
    float gpa;

    student(string s, int r, float g)        // <----- Constructors
     {
         name = s;                           
         rno = r;
         gpa = g;
     }
 };

int main(){

    student s1("Akash",76,8.5);
    student s2("Raghav",36,6.2);

   cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
   cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;


}