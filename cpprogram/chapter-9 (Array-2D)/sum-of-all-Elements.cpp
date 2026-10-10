// Find the sum of all elements in a given Array

// logic is same to same in 1D-array and 2D-array

#include<iostream>
  using namespace std;

  int main(){

       int n;
       int m;

              cout<<"Enter size rows of arr : ";
              cin>>n;

              cout<<"Enter size columns of arr : ";
              cin>>m;

     int arr[n][m];
                 
               cout<<"Enter Elements of arr : ";

      int sum = 0;
            
                for (int i = 0; i < n; i++)
                  {
                    for (int j = 0; j < m; j++)
                          {
                        
                             cin>>arr[i][j];

                          }
                    
                   }

                 for (int i = 0; i < n; i++)
                  {
                    for (int j = 0; j < m; j++)
                          {
                        
                             sum += arr[i][j];

                          }
                    
                   }  
               
          cout<<"sum of arr : "<<sum;

     return 0;
  }
   



  