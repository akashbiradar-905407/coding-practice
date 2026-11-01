// There are main 4-common way for printing output in vectors:

// 1) size() and capacity();
// 2) push_back() and pop_back();
// 3)emplace_back();
// 4) printing-output from 4-methods;

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

     vec.emplace_back(6);           //<------- do same work pushing Elements in vector;

     vec.pop_back();                // <----- Delete one vector from back;

     int n = vec.size();

     //1. Normal for loop (using index)

            for (int i = 0; i < n; i++)
                {
                cout<<vec[i]<<" ";                  
                }
        cout<<endl;

    // 2. Range-based for loop

            for(int val : vec){

                cout<<val<<" ";
            } 

     cout<<endl;

    // 3. Using iterators
        
            for(auto it = vec.begin(); it != vec.end(); it++) {
        
                cout << *it << " ";
            }
        cout<<endl;

    // 4. Using while loop
    
              int i = 0;

                while(i < vec.size()) {
                    cout << vec[i] << " ";
                    i++;
                }
         cout<<endl;       

     cout<<vec.size()<<endl;          //<------ size of vector;
     cout<<vec.capacity()<<endl;      //<------ capacity of vector;

 }  
