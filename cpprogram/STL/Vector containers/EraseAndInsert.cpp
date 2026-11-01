// Erase & Insert

#include<iostream>
#include<vector>
  using namespace std;

  int main(){

    vector<int>vec = {1,2,3,4,5};         // <---- creating 'vec' with Elements

    vec.erase(vec.begin()+3);            // <----- remove or erase from index 3-Element

    vec.insert(vec.begin()+3,100);        // <----- Add or insert new-Element in 3-index

    for(int val : vec)
      
      {
        cout<<val<<" ";
      }

      cout<<endl;

  }