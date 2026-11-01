// 1) vector:
//            Creating vector

#include<iostream>
#include<vector>                      //<---- Header of vector;
   using namespace std;

 int main(){

    vector<int>vec;                  //<------ creating vector;
      
     vec.push_back(1);
     vec.push_back(2);              //<------- pushing Elements in vector;
     vec.push_back(3);
     vec.push_back(4);
     vec.push_back(5);

     int n = vec.size();

     for (int i = 0; i < n; i++)
        {
        cout<<vec[i]<<" ";                  // printing vector Elements
        }
      cout<<endl;

     for(int val : vec){

        cout<<val<<" ";
     } 

     cout<<endl;

     cout<<vec.size()<<endl;          //<------ size of vector;
     cout<<vec.capacity()<<endl;      //<------ capacity of vector;

 }  
