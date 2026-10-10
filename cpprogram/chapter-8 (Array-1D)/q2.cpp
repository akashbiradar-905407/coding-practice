// products

// Q2) calculate the product of all the elements in the given array
  
//   in this add all elements ahd store in varible 
//       use ---> (sum *= arr[i]; )

#include<iostream>
   using namespace std;

   int main(){

       int arr[] = {12,6,7,34,9,23};

       int n = sizeof(arr)/4;

       int sum = 1;

       for (int i = 0; i < n; i++)

          {
        
            sum *= arr[i];

           }
        
           cout<<"sum of Array : "<<sum;
       


   }
  
    
  