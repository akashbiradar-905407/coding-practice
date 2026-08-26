// WAP to find composite number or not
// 

// where to use break;

#include <iostream>
  using namespace std;

  int main(){

    int n;

    cout<<"Enter n: ";
    cin>>n;

bool composite = false;

for (int i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
        composite = true;
        break;
    }
 }

if (composite == false)
        {
             cout << n << " is prime number";
         }
else  
    {
        cout<<n<< " is composite number";
    }




     return 0;
 }