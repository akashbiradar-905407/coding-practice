// second largest number....

#include <iostream>
  using namespace std;

 int main(){

    int a,b,c;

    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;

    if (a<b)
     {
        if (a>c)
                 {
                    cout<<a;                     // b>a>c
                 }
        
        else {

                if (c>b)
                          {
                             cout<<b;            // c>b>a
                           }
                else    
                       {
                          cout<<c;              // b>c>a
                       }
             }         
      }
      
    else
         {

            if (b>c)
                     {
                        cout<<b;                           // a>b>c
                     }
            
            else
                 {
                    if (c>a)
                              {
                                cout<<a;                   // c>a>b
                               }
                    
                     else
                            {
                                cout<<c;                  // a>c>b
                            }


                 }         
         }











    return 0;
  }