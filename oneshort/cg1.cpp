//Identify the quadrant of a point (x, y).

#include <iostream>
  using namespace std;

 int main(){

    int x,y;

    cout<<"Enter x,y: ";
    cin>>x>>y;

    if (x==0)
              {
                   if (y==0)
                              {
                                 cout<<"origin";                                  // (0,0)
                              }
                   else
                              {
                                  if (y>0)
                                                    {
                                                         cout<<"y-line";          // (0,y)
                                                     }
                                    else
                                              {
                                                cout<<"-y line ";                 // (0,-y)

                                              }


                               }
                 }
    
     else 
           {
                      if (x>0)
                                  {
                                      if (y>0)
                                             {
                                                cout<<"q1";                  // (x,y)
                                              }
                                      else 
                                            {
                                               if (y==0)
                                                      {
                                                         cout<<"x-line";     //(x,0)
                                                       }
                                                else
                                                     {
                                                       cout<<"q4";          //(x,-y)
                                                     }
                                             }
                                    }
                

                    else
                        {

                                if (y > 0)
                                              {
                                                  cout << "q2";                          //(-x,y)
                                              }
                                else
                                             {
                                                if (y == 0)
                                                            {
                                                                 cout << "-x line";      //(-x,0) 
                                                            }
                                                else
                                                            {
                                                                 cout << "q3";           //(-x,-y)
                                                             }
                                             }






                             }

                             
                            }
                            
             return 0;
  }