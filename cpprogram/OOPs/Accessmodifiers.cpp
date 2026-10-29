// Access Modifiers :

// 1) public
// 2) protected
// 3) private      : using (getters and setters) Function ;

#include<iostream>
 using namespace std;
 
 class students{

    public :
 
    int rno;
    string name;

    students(int r, string n, float m){

        rno = r;
        name = n;
        marks = m;
    }

    // getter

    float getmarks(){
        
        return marks;
    }
    
    // setter

    void setmarks(float m){
      
        marks = m;
    }

    private :

    float marks;
 };

 int main(){

    students s1(76,"Raghav",92.2);

    cout<<s1.getmarks()<<endl;
     
    s1.setmarks(98.5);

    cout<<s1.getmarks()<<endl;
 }