// Clear and Empty :

#include<iostream>
#include<vector>
  using namespace std;

  int main(){

    vector<int>vec = {1,2,3,4,5};

    vec.clear();                             // <----- clear all Elements from 'vec'

    for(int val : vec)
      { 
        cout<<val<<" ";
      }
      
    cout<<endl;

    cout<<"is Empty : "<<vec.empty()<<endl;         // <---- tells that vector Elements 
                                                    // are Empty or not by (1,0);

  return 0;
  }