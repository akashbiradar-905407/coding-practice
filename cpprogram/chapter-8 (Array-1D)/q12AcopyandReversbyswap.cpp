// copy Array and revers with swap

// WAP to revers the Array without using any extra Array

#include <iostream>
 using namespace std;

 int main(){

    int n;
           cout<<"Enter size of Array : ";
           cin>>n;

    int arr[n];

              
            cout<<"Enter elements of Array : ";

            for (int i = 0; i < n; i++)
               {
                    cin>>arr[i];
               }

            for (int i = 0; i < n; i++)
               {
                    cout<<arr[i]<<" ";
               }   
        
      // reverse
      
             int i = 0;
             int j = n-1;

             while (i<j)
                  {
                    
                      int temp = arr[i];
                      arr[i] = arr[j];
                      arr[j] = temp;
                      
                      i++;
                      j--;
                   
                  }

            cout<<endl;      
             
             for (int i = 0; i < n; i++)
               {
                    cout<<arr[i]<<" ";
               }

       return 0;        
}