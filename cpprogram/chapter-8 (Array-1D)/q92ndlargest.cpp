// 2nd largest number

// Find the second largest element in the given Array


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
      int mx = INT_MIN;
      
          for (int i = 0; i < n; i++)

                 {
                    mx = max(mx,arr[i]);
                 }

        int smax = INT_MIN;

           for (int i = 0; i < n; i++)
               
               {
                   if (arr[i]!=mx)
                      {
                       smax = max(smax,arr[i]);  
                      }
                }   
        
        cout<<"2nd largest element of array : "<<smax;    
           
  return 0;


} 















































































