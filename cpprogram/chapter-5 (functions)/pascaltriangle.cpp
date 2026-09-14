// pascal triangle

// i j=0 1 2 3 4 5
// |
// 
// 0   1
// 1   1 1
// 2   1 2 1
// 3   1 3 3 1
// 4   1 4 6 4 1
// 5   1 5 10 10 5 1

// combination: 
//             n
//              C = n!/(r!*(n-r)!) = (i,j)
//               r
// a = n!, b = r!, c = (n-r)!

#include <iostream>
  using namespace std;

   
  int fact (int x)
     
    {
         int f = 1;

         for (int i = 1; i <= x; i++)
          {
            f*=i;
          }
         
          return f;

        } 


 int ncr (int n, int r)
    
    {
       return fact(n)/(fact(r)*fact(n-r));

    }
    
 int main(){


    int n;

     cout<<"Enter n: ";
     cin>>n;

     for (int i = 0; i <=n; i++)
          {
             for (int j = 0; j <= i; j++)
                {
                    cout<<ncr(i,j)<<" ";
                 }
             
                 cout<<endl;
          }
     

      return 0;

  }