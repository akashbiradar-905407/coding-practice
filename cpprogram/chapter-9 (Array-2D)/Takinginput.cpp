// Taking input from user's :
//                 


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
               
           for (int i = 0; i < n; i++)
              {
                for (int j = 0; j < m; j++)
                      {
                        
                       cout<<arr[i][j]<<" ";

                      }
            cout<<endl;
                }
              
   return 0;

 }