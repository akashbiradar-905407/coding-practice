// type of traingle 

#include <iostream>
 using namespace std;

 int main(){

  int a,b,c;

   cout<<"Enter side of triangle: ";
   cin>>a>>b>>c;


  if(a+b>c and b+c>a and c+a>b)

    {
      if (a==b and b==c)
            {
              cout<<"equliter triangle";
            }
    
     else
         {
           
           if (a==b and a!=c || b==c and b!=a || c==a and c!=b)
               
                   {
                       cout<<"isoceles";
                    }
            
             else
                    {
                       cout<<"scalene";
  
                    }       




         }        
        }
   
    else
          {
              cout<<"invalid";

          }    

 }