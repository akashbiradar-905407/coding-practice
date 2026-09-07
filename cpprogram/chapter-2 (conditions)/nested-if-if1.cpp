// Nested-if-if

// Take 3 positive integer input and print greatest of them. without using multiple conditions

#include <iostream>
  using namespace std;

  int main(){

      int a,b,c;

      cout<<"Enter a,b,c number: ";
      cin>>a>>b>>c;

      if (a>b)
         {
            if (a>c)
              {
                cout<<a<<" gretest";
              }
            
             else 
                  {
                    cout<<c<<" gretest";
                  }
                }
             
    else 
             {
                if (b>c)
                  {
                    cout<<b<<" gretest";
                  }
                
                else
                    {
                      cout<<c<<" gretest";  
                    }  
             }         

            
    return 0;
  }