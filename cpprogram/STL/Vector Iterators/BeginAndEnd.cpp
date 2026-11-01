// vec.begin() And vec.end()

#include<iostream>
#include<vector>
 using namespace std;

 int main(){

    vector<int>vec = {1,2,3,4,5};

    cout<<"vec.begin : "<<*(vec.begin())<<endl;    // <--- give from 1st Elements
    //cout<<"vec.end   : "<<*(vec.end())<<endl;      // <---- from last 

    return 0;
 } 