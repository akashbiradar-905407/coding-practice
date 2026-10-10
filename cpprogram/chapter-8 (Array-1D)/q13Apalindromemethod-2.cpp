// Method-2

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
             
               int i = 0;
               int j = n-1;

        while (i <= j)
               
             {
                if (arr[i] != arr[j])
                       
                    {
                        cout << "Not palindrome : ";
        
                          for (int k = 0; k < n; k++)
                   
                               {
                                 cout << arr[k] << " ";
                                 
                                }

                          return 0;
                     }

               i++;
               j--;
            }

         cout << "Palindrome : ";

                  for (int k = 0; k < n; k++)
                       
                     {
                        cout << arr[k] << " ";
                     }
    return 0;
} 