// '+' <---- plus operator: 
//                         Add word Before string or After string

#include<iostream>
   using namespace std;

   int main(){

    string str = "Akash";
    string str2 = str;

      cout<<str<<endl;

      str = "Biradar " + str;          //<----- Before use adding

       cout<<str<<endl;
                                     
      str2 = str2 + " Biradar";         //<----- After use adding
     
       cout<<str2<<endl;



   }