// max

// find the maximum value out of all elements in the Arrays;

// method - 2
//            use :---> if(arr[i]>mx) mx = arr[i];


#include<iostream>
   using namespace std;

   int main(){

       int arr[] = {12,6,7,34,9,23};

       int n = sizeof(arr)/4;

       int mx = INT_MIN;

       for (int i = 0; i < n; i++)

          {
        
            if(arr[i]>mx) 

              {
                 mx = arr[i];
              }

           }
        
       cout<<"maximun of Array : "<<mx;    
    
    return 0;

   }
  
    
  