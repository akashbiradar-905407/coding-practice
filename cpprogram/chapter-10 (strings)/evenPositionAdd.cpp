// Input string of size n and update all the even poistions in the 
// string to charcter 'a'. consider o-based indexing 

#include<iostream>
 using namespace std;

 int main(){

    string str;

         cout<<"Enter string : ";
         getline(cin,str);


         int n = str.length();

         for (int i = 0; i < n; i++) {

         if (i%2 == 0)
             {
            
               str[i] = 'a';

             }
            }
         
           cout<<str;


       return 0;    

 }