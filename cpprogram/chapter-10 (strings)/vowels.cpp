// vowels count

// Input sa string of length n and cout all vowels inthe given string..
//

#include<iostream>
 using namespace std;

 int main(){

    string str;

         cout<<"Enter string : ";
         getline(cin,str);


         int n = str.length();

         int count = 0;

         for (int i = 0; i < n; i++) {

         if (str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
             {
            
               count++;

             }
            }
         
           cout<<count;


       return 0;    

 }