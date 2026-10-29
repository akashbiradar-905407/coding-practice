// Defalult and parameterized :

#include<iostream>
 using namespace std;

 class students{
  
    public : 

    string name;
    int rno;
    int gpa;

    // Defalut;
    students(){                      

    }

    //Parameterized;
    students(string s,int r){

        name = s;
        rno = r;
        
    }

    students(string s,int r , int g){

         name = s;
         rno = r;
         gpa = g;

    }

 };

 int main(){

   students s1("raghav",76);
         
       s1.gpa = 8.3;

   students s2;
   
     s2.name = "Akash";
     s2.rno = 86;
     s2.gpa = 6.4;


   students s3("gagan",9.2,13);
   
   
   cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
   cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
   cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;




 }

