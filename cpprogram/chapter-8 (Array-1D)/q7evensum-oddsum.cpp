// Evensum - oddsum

// find the difference between the sum of elements at even indices 
//  to the sum of elements at odd indices

#include<iostream>
  using namespace std;

 int main(){

    int n;
   
           cout<<"Enter size of Arrays: ";
           cin>>n;

    int arr[n];

    // int n = sizeof(arr)/4;

       cout<<"Enters Elements of Array : ";

     for (int  i = 0; i < n; i++)
       {
          cin>>arr[i];
        }
    
     int evensum = 0;
     int oddsum = 0;   
   
     for (int i = 0; i<n; i++)
        {
          if(i%2==0)
             {
               evensum += arr[i];
             }
           else 
              {
                 oddsum += arr[i];

              }  
         
          }
           
        cout<<"Answers : "<<(evensum-oddsum);
    
    
     return 0;

}