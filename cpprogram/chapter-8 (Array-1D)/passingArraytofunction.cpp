// passing Arrays to function 
// arrays is already pass by referance

// updating value using function : 

#include <iostream>
 using namespace std;


  void change(int arr[])
   {
       arr[0] = 9;
 
   }

 int main(){

    int arr[] = {1,2,3};

    for(int i = 0; i<=2; i++)
      {
         cout<<arr[i]<<" ";

      }
     cout<<endl;
     
     change(arr);

     for(int i = 0; i<=2; i++)
      {
         cout<<arr[i]<<" ";

      }



    return 0;
 }