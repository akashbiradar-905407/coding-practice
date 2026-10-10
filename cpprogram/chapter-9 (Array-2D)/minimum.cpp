// find the minimum value out of all the Elements in the array

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

           
       int mn = INT_MAX;   

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
                        
                             mn = min(mn,arr[i][j]);

                          }
                    
                   }  
               
          cout<<"minimum of arr : "<<mn;

     return 0;
  }