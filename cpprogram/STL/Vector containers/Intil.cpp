
// 5)at();
// 6)front() and back();
// 7) vector<int>vec1 = {1,2,3,4,5};
// 8) vector<int>vec2(vec1);         
// 9) vector<int>vec3(10,-1);    



#include<iostream>
#include<vector>
  using namespace std;

  int main(){

  vector<int>vec1 = {1,2,3,4,5};  //<---- creating vector direct using Elements;

  vector<int>vec2(vec1);         //<---- Elements of vec2 is same Elements of vec1
  
  vector<int>vec3(10,-1);       //<---- '10' is no.of index and '-1' is Elements in all 10-index,


   for (int val : vec1)
        {
          cout<<val<<" ";
        } 
   
     cout<<endl;                               // <----- All 3-vectors
    
     for (int val : vec2)
        {
          cout<<val<<" ";
        } 
   
     cout<<endl;   

      for (int val : vec3)
        {
          cout<<val<<" ";
        } 
   
     cout<<endl;  
     
     cout<<"front: "<<vec1.front()<<endl;     //<---- from starting
     cout<<"back : "<<vec1.back()<<endl;       // <----- from last
  

   }