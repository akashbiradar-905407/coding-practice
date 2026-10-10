// Transpose of matrix:

// printing by colume

//  1st j then 2nd i :                 


#include<iostream>
  using namespace std;

  int main(){
     
      int n;
      int m;

      cout<<"Enter n size of rows : ";
      cin>>n;

      cout<<"Enter m size of columns : ";
      cin>>m;
     
      int arr[n][m];

        cout<<"Enter element of Array : ";  
                          
           for (int i = 0; i < n; i++)
              {
                for (int j = 0; j < m; j++)
                      {
                        
                       cin>>arr[i][j];

                      }
              }
               
           for (int j = 0; j < m; j++)
              {
                for (int i = 0; i < n; i++)
                      {
                        
                       cout<<arr[i][j]<<" ";

                      }
            cout<<endl;
                }
              
   return 0;

 }