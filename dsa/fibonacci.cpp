#include <iostream>
using namespace std;

int main()
{
    int a,b;
     a=0;
     b=1;
     cout<<a<<" "<<b<<" ";
 for ( int i = 1; i < 50; i++)
 {
   int next=a+b;
   cout<<next<<" ";
   a=b;
   b=next;
 }
 
}