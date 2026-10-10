// Find the products of all elements in a give matrix:
//

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

      int product = 1;
            
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
                        
                             product *= arr[i][j];

                          }
                    
                   }  
               
          cout<<"sum of arr : "<<product;

     return 0;
  }
   



  