//  Squares 

// Given an integer n . creat an array containing squares of all natural numbers
//                        till n and print the elements of the Array

// 

#include<iostream>
  using namespace std;

  int main(){


  int n;

     cout<<"Enter size of Array : ";
     cin>>n;


  int arr[n];

  cout<<"Enters Elements of Array : ";

  for (int i = 0; i<n; i++)
      {
         cin>>arr[i];
      }
   
  for (int i = 0; i<n; i++)
       {
        cout<<arr[i]*arr[i]<<" ";
       }
    

  return 0;

 }