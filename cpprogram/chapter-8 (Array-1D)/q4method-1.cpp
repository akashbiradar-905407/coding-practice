// minimum

// find the minimum value out of all elements in the Arrays;

// method - 1
//            use :---> mn = (mn,arr[i]);


#include<iostream>
   using namespace std;

   int main(){

       int arr[] = {12,6,7,34,9,23};

       int n = sizeof(arr)/4;

       int mn = 12;                         // 1st elements of array

       for (int i = 1; i < n; i++)          // start from 1 .

          {
        
            mn = min(mn,arr[i]);

           }
        
       cout<<"minimum of Array : "<<mn;    
    
    return 0;
    
}
