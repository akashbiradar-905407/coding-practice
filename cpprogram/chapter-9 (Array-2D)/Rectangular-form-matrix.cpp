// Given a matrix 'a' of dimension n*m and 2 coordinates (l1,r1) and (l2,r2) . 
// return sum of the rectangle from (l1,r1) to (l2,r2)

// means (1,1) to (4,2) make retangular and return sum all them

#include<iostream>
     using namespace std;

 int main(){

       int arr[5][4];

           cout<<"Enter Elements of arr : ";

            for (int i = 0; i < 5; i++)
              {
                for (int j = 0; j < 4; j++)
                      
                     {
                    
                        cin>>arr[i][j];

                     }
                
               }
              
        // Store rectangle (1,1) to (4,2) in arr2
     

        int arr2[4][2];       

             for (int i = 1; i <= 4; i++)
              {
                for (int j = 1; j <= 2; j++)
                      
                     {
                    
                        arr2[i-1][j-1] = arr[i][j];

                     }
                
               }  

        // Print arr2

              cout << "Rectangle stored in arr2:" << endl;


               for (int i = 0; i < 4; i++)
              {
                for (int j = 0; j < 2; j++)
                      
                     {
                    
                        cout<<arr2[i][j];
                     }
                  cout<<endl;
               } 
               
         // Find sum of arr2       

        int sum = 0;       
              
               for (int i = 0; i < 4; i++)
              {
                for (int j = 0; j < 2; j++)
                      
                     {
                    
                        sum += arr2[i][j];

                     }
                
               }  
           
            cout<<"Total sum of arr2 : "<<sum;
            
        return 0;    
     }