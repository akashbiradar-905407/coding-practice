// Substring string 

// Input a string of length greather than 5 and Revers the substring from position
// 2 to 5 using inbulit function

#include<iostream>
#include<string>
#include<algorithm>
 using namespace std;

 int main(){

    string str;

         cout<<"Enter string : ";
         getline(cin,str);

         int n = str.length();

         cout<<"Size of string : "<<n;

         cout<<endl;

         reverse(str.begin()+2,str.begin()+5);
         
         cout<<str<<endl;

       return 0;

 }




  