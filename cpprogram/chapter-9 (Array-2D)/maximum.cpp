// find the maximum value out of all the Elements in the array

// same to same code logic from 1D-array to 2D-array:

#include<iostream>
#include<cmath>
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

           
         int mx = INT_MIN;   

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
                        
                             mx = max(mx,arr[i][j]);

                          }
                    
                   }  
               
          cout<<"maximum of arr : "<<mx;

     return 0;
  }