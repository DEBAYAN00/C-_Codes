#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() 
{
 float a, b ;
 char c;
 while (1)
 {
   cout<<"choose your function: ";
           cin>>c;
           cout<<endl;
           cout<<"enter the value of a :" ;
            cin>> a;
             cout<<endl;
              cout<<"enter the value of b :" ;
              cin>> b;
               cout<<endl;
               
                
           if (c == '+' )
           {
             cout<<"Result is " << a+b <<endl;
           }
           if (c == '-')
           {
             cout<<"Result is " << a-b <<endl;
           }
           
           if (c == '*' )
           {
             cout <<"Result is " << a*b <<endl;
           }
            if( c== '/')
           {
             cout<<"Result is " << a/b<<endl;
           }
           if(c== '^')
            {
              cout<< "Result is " << pow(a,b) <<endl; 
            }
if (c== '!')
{
  break;
}

}

 return 0;
 }
 
  