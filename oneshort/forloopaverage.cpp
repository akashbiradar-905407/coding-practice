// Find average between between 1 and n.

#include <iostream>
 using namespace std;

 int main(){


    int n; 

          cout<<"Enter n: ";
          cin>>n;
          
          int sum =0;
          

     for (int i = 1; i <= n; i++)
             {
                
                  cout<<i<<" ";
                  sum+=i; 
              }
                  cout<<endl<<" sum = "<<sum;
             
                  cout<<endl;
                  cout<<"Average = "<<sum/n;
    
      return 0;
 
   }