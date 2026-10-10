// Wap to ADD 2-Matrix...

#include<iostream>
  using namespace std;

  int main()

    {

     int n;
     int m;
                cout<<"Enter n size of row arr : ";
                cin>>n;

                cout<<"Enter m size of columns a : ";
                cin>>m;

        
     int a[n][m];
                  
                cout<<"Enter Elements of arr : ";

                for (int i = 0; i < n; i++)
                   {
                     for (int j = 0; j < m; j++)
                       {
                       
                         cin>>a[i][j];
                    
                       }
                  } 
                  
              cout<<"a[i][j] :" <<endl;     

                 for (int i = 0; i < n; i++)
                   {
                     for (int j = 0; j < m; j++)
                       {
                       
                         cout<<a[i][j]<<" ";
                    
                       }
                     cout<<endl;  
                  }  
        
     int b[n][m];
                  
                cout<<"Enter Elements of b : ";

                for (int i = 0; i < n; i++)
                   {
                     for (int j = 0; j < m; j++)
                       {
                       
                         cin>>b[i][j];
                    
                       }
                  } 
                  
            cout<<"b[i][j] :" <<endl;       

                 for (int i = 0; i < n; i++)
                   {
                     for (int j = 0; j < m; j++)
                       {
                       
                         cout<<b[i][j]<<" ";
                    
                       }
                     cout<<endl;  
                  }     

                    
        int c[n][m];
                  
                

                for (int i = 0; i < n; i++)
                   {
                     for (int j = 0; j < m; j++)
                       {
                       
                           c[i][j] = a[i][j] + b[i][j] ;
                    
                       }
                  }  
                  
           cout<<"c[i][j] :" <<endl;           

                 for (int i = 0; i < n; i++)
                   {
                     for (int j = 0; j < m; j++)
                       {
                       
                         cout<<c[i][j]<<" ";
                    
                       }
                     cout<<endl;  
                  } 

            return 0;

    }       