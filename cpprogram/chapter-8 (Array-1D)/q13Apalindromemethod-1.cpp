// Method-1 

//check Array is palindrome

// if an array arr contains elements, then check if the given array is a palindrome or not 


#include<iostream>
   using namespace std;

  int main(){

      int n;

            cout<<"Enter size or array : ";
            cin>>n;
      
      int arr[n];
                   
             cout<<"Enter element of arr : ";

             for (int i = 0; i < n; i++)
                 
                 {
                 
                    cin>>arr[i];

                 } 
                 
                 for (int i = 0; i < n; i++)
                 
                     {
                 
                      cout<<arr[i]<<" ";

                     }  
             
               int i = 0;
               int j = n-1;
               
               int flag = 0;

             while (i <= j)
                         
                     {
                       if (arr[i] != arr[j])
                               
                               {
                                 flag = 1;
                                 break;
                               }

                               i++;
                               j--;
                      }


               if (flag == 1)
                   
                   {
                     cout << "Not palindrome : ";
                   }
               else
                   {
                     cout << "Palindrome : ";
                   }

    return 0;
} 