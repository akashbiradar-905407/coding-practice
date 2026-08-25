//check whether a point lies on the x-axis.

# include <iostream>
    using namespace std;

int main(){


   int x,y;

    cout<<"Enter x,y: ";
    cin>>x>>y;

    // if (y==0)

//             {
//                 if (x==0)
//                         {
//                             cout<<"orgin";
//                           }
            
//                 else
//                       {
//                          if (x>0)
//                                  {
//                                    cout<<"x-axis";             //(x,0)
//                                  }
//                           else 
//                                 {
//                                    cout<<"-x axis";           // (-x,0)
//                                  }
//                        }
//             }

//      else
//              {
//                 cout<<"invalid";                             // (x,y) or (-x,y)

//              }
//    return 0;


// }



    if (y == 0)
    {
        cout << "Point lies on x-axis";
    }
    else
    {
        cout << "Point does not lie on x-axis";
    }

    return 0;
}



