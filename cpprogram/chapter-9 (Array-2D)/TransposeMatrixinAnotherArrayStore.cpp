// Transpose of matrix: store in another Array 

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

              //printing :
            
               cout<<"arr : "<<endl;

                for (int i = 0; i < n; i++)
              {
                for (int j = 0; j < m; j++)
                      {
                        
                       cout<<arr[i][j]<<" ";

                      }
               cout<<endl;

                }



        // storing in new Array arr2 :       

        int arr2[m][n];      
               
           for (int j = 0; j < m; j++)
              {
                for (int i = 0; i < n; i++)
                      {
                        
                       arr2[j][i] = arr[i][j];

                      }
                }

            //printing :
            
               cout<<endl<<"arr2 : "<<endl;

                for (int i = 0; i < m; i++)
                  {
                     for (int j = 0; j < n; j++)
                          {
                             cout << arr2[i][j] << " ";
                          }
                     cout << endl;
                  }
              
   return 0;

 }