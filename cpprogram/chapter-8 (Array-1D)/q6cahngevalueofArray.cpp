// Change value of Array

// Given an Array of integers , change the value of all odd indexed elements 
//                 to its second multiple and increment all even indexed element vlue by 10.

//

#include<iostream>
  using namespace std;

  int main(){

  int arr[5];

  int n = sizeof(arr)/4;

  cout<<"Enters Elements of Array : ";

  for (int  i = 0; i < n; i++)
     {
       cin>>arr[i];
     }
  
   
  for (int i = 0; i<n; i++)
       {
          if(i%2==0)
             {
               arr[i]+=10;
             }
           else 
              {
                 arr[i]*=2;

              }  
         
       }

     for (int  i = 0; i < n; i++)
       {
          cout<<arr[i]<<" ";
       }
    
    

  return 0;

 }