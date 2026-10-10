// ADVANCE QUESTIONS :

//copy Array and revers 

// WAP to copy the contents of one array into another in the reverse orders

#include<iostream>
 using namespace std;

 int main(){

     int n;

        cout<<"Enter size of array : ";
        cin>>n;

     int a[n];
     
            cout<<"Enter element of array : ";

            for (int i = 0; i < n; i++)
                 
                  {
                     cin>>a[i];

                   }

     int b[n];

              int j = 0;

              cout<<"array in revers order : ";
              
              for (int i = 0; i < n; i++)
                 
                 {                   
                    j = n-1-i;

                    b[i]=a[j];

                 cout<<b[i]<<" ";   

                  }
   return 0;           
            
}