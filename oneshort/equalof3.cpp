#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a == b)
    {
        if (b == c)
        {
            cout<<"3 are equal";
        }
        else
        {
            cout<<"a and b equal";
        }
    }
    
    else
          {
                if (a == c)
                {
                    cout<<"a and c are equal";
                }
                
                else{

                    cout<<" not equals";
                }


          }

          return 0;
        }