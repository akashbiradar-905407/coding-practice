//  Arrays 

// Updating Array  


// by taking input using loops for initialistion and printing...

#include<iostream>
 using namespace std;

 int main(){

  // 5 integers -> 1,2,3,4,5

   int arr[5];  
  
   cout<<"Enter Array : ";

   for (int i = 0; i <= 4; i++)
   {
     cin>>arr[i];
   }
   for (int i = 0; i <= 4; i++)
   {
     cout<<arr[i]<<" ";
   }
   
   arr[0] = 100;

   cout<<endl;

   for (int i = 0; i <= 4; i++)
   {
     cout<<arr[i]<<" ";
   }

   return 0;

}