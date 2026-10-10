// Size of Arrays 

// Size Depands on Data type use in code;
// eg :- integer = 4 bites;

// And storing size in another varible for use in code;

#include<iostream>
 using namespace std;

 int main(){

   int arr[] = {1,2,3,4,5,6,7};

   int n = sizeof(arr)/4;

   cout<<"Elements in arrays : "<<n<<endl;
  
   for (int i = 0; i < n; i++)                   // use here storing size
     
     {
         cout<<arr[i]<<" ";
     
     }
   

  return 0;

 }