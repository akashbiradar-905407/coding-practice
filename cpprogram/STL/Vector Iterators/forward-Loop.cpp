// Forward-Loops
// using Iterators-Loop for printing "vectors";

#include<iostream>
#include<vector>
 using namespace std;

 int main(){

 vector<int>vec = {1,2,3,4,5};

 vector<int>::iterator it;                         //<----- creating iterator Loop

 for(it = vec.begin(); it!=vec.end(); it++){
                                                  //<---- by using for-loop
    cout<<*(it)<<" ";
 }

 cout<<endl;

 return 0;

}