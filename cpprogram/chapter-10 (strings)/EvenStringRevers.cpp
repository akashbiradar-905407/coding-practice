// Even string Revers :

// Input a String of even length and Revers the first half of the string


#include<iostream>
#include<string>
#include<algorithm>
 using namespace std;

 int main(){

    string str;

         cout<<"Enter string : ";
         getline(cin,str);

         int n = str.length();

         cout<<"Size of string"<<n;

         cout<<endl;

         reverse(str.begin(),str.begin()+n/2);
         
         cout<<str<<endl;

       return 0;

 }




  