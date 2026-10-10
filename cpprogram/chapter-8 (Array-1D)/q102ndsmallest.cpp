// 2nd smallest number

// Find the second smallest element in the given Array


#include<iostream>
#include <climits>
 using namespace std;

int main(){

     int n;
         
       cout<<"Enter size of Array : ";
       cin>>n;

     int arr[n];

           cout<<"Enter the Elements of Arrays : ";

         for (int i = 0; i < n; i++)
           {
             cin>>arr[i];
           }
      int mn = INT_MAX;
      
          for (int i = 0; i < n; i++)

                 {
                    mn = min(mn,arr[i]);
                 }

        int smn = INT_MAX;

           for (int i = 0; i < n; i++)
               
               {
                   if (arr[i]!=mn)
                      {
                       smn = min(smn,arr[i]);  
                      }
                }   
        
        cout<<"2nd smallest element of array : "<<smn;    
           
  return 0;


} 



















