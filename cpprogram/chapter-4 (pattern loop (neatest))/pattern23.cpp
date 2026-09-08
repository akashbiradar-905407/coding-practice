// star cross

// *       *
//   *   *
//     *
//   *   *
// *       *



#include <iostream>
  using namespace std;

  int main(){

       int m;

       cout<<"Enter m: ";
       cin>>m;
       
    //    int n;

    //    cout<<"Enter n: ";
    //    cin>>n;

       

       for (int i = 1; i <= m; i++)
          {
             for (int j = 1; j <= m; j++)

                {
                   if ((i == j) || ((i+j)==m+1))
                     {
                         cout<<"* ";
                     }
                    
                    else
                        {
                            cout<<" "<<" ";
                        } 
                }
            
                  cout<<endl;
            
          }
       
    return 0;
  }