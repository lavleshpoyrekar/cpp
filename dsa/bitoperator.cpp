#include <iostream>
using namespace std;

int main()
{
  int a,b,p,q,r,s;
  a=1;
  b=2;
  p = a&b;
  q= a||b;
  r= ~b;
  s=a^b;
 cout<<p<<endl; 
 cout<<q<<endl;
 cout<<r<<endl;
 cout<<s<<endl;
 //shift operator
 cout<<(16>>3)<<endl;
 cout<<(5<<3)<<endl;
}