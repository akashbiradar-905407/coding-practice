 //
 #include <iostream>
  using namespace std;

  main(){

   char ch;

   cout<<"Enter letter: ";
   cin>>ch;

   if (ch == 'a'||ch == 'A' || ch == 'e'|| ch == 'E' || ch == 'i'|| ch == 'I' || ch == 'o'|| ch == 'O' || ch == 'u'|| ch == 'U' )
   {
     cout<<" vowels";
   }
   
   else
       {
           cout<< "consonsnt";

       }

 return 0;



  }