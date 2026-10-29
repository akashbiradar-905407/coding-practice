// Multiple-inheritance : 


#include<iostream>
 using namespace std;

 // PARENT CLASS - 1 :
 class cricketers{

 public :

   int runs;
   int wickets;
   int avg;

 };

 // PARENT CLASS - 2 :

 class Engineer{

 public :

     int experiences;
     string domain;
 };

 // child class from 1 and 2 (parent class)

 class phodu : public Engineer,public cricketers{

    public :
  
     string name;

 };

 int main(){

 phodu p1;
 
  p1.name = "Raghav";
  p1.avg = 47;
  p1.runs = 23000;
  p1.wickets = 234;
  p1.name = "Raghav";
  p1.domain = "sql";
  p1.experiences = 9;

  cout<<p1.name<<" "<<p1.runs<<" "<<p1.avg<<" "<<p1.wickets<<" ";
  cout<<p1.domain<<" "<<p1.experiences<<endl;
  

 }
 