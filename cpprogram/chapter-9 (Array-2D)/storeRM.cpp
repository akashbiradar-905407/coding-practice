// WAP to store roll.no and marks obtained by 4-student side-by-side in a matrix.

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

        cout << "Enter Roll No. and Marks:" << endl;

            for (int i = 0; i < n; i++)
                {
                  for (int j = 0; j < m; j++)
                    {
                      cin >> arr[i][j];
                    }
                 }

    cout <<endl<< "Roll No.   Marks" << endl;

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