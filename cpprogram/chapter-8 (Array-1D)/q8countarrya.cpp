// count Array

// count the number of elements in given array greather than agiven number x
// x = any number

#include <iostream>
  using namespace std;

 int main(){


   int x;
   
     cout<<"Enter number : ";
     cin>>x;

   int n;
    
     cout<<"Enter size of Array : ";
     cin>>n;

   int arr[n];
   
     cout<<"Enter the Elements of Arrays : ";

         for (int i = 0; i < n; i++)
           {
             cin>>arr[i];
           }
    int count = 0;
    
         for (int i = 0; i < n; i++)
             {
                if (arr[i]>x)
                   {
                     count++;
                   }
                
             }
         

    cout<<"Total arryas Elements greather > x : "<<count;


    return 0;

 } 