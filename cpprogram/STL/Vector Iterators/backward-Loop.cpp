// Backward-loop
// using (Revers-Iterators-Loop) for printing "vectors";

#include<iostream>
#include<vector>
 using namespace std;

 int main(){

 vector<int>vec = {1,2,3,4,5};

 vector<int>::reverse_iterator it;                    //<----- creating iterator Loop

 for(it = vec.rbegin(); it!=vec.rend(); it++){
                                                    //<---- by using for-loop
    cout<<*(it)<<" ";
 }

 cout<<endl;

 return 0;

}