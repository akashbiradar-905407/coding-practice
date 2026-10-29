// Reverse an Array Using Pointers

#include<iostream>
 using namespace std;


int main(){

 int n;

    cout<<"Enter size of Array : ";
    cin>>n;
   
  int arr[n];
  
    cout<<"Enter elements of array : ";

    for (int i = 0; i < n; i++)
         {
           cin>>arr[i];

         }
    
    int* ptr = &arr[n];
    
    int b[n];

              int j = 0;

              cout<<"array in revers order : ";
              
              for (int i = 0; i < n; i++)
                 
                 {                   
                    j = n-1-i;

                    b[i]=arr[j];

                   cout<<b[i]<<" ";   

                  }
   return 0;           
            
}