// gretest of 4 number

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c >> d;

    if (a>b)
    {
          if (a>c)
                     {
                        if (a>d)
                                {
                                   cout<<a;
                                 }
                        else
                             {
                                cout<<d;
                              }
                      }
            else 
                   {
                        if (c>d)
                                   {
                                      cout<<c;
                                    }
                        else
                                  {
                                    cout<<d;
                                  }

                    }
    }
    
    else  {

             if (b>c)
                   {
                       if (b>d)
                            {
                               cout<<b;
                             }
                        else
                            {
                               cout<< d;
                            }
                   }
                     
                else
                     {
                        if (c>b)
                                  
                                    {
                                       cout<<c;
                                     }
                            
                                     
                         else    
                                 {
                                        cout<<d;
                                     
                                 }
                     }
             }
             

    
   

    return 0;
}