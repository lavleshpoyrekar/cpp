#include <iostream>
using namespace std;
int main()
{
 char ch[6]="abcde";
 char ch1[4]="pqr";
 cout<<ch<<endl;
 char *p=ch+1;
 cout<<p<<" "<<*p<<" "<<&p<<endl;
 char *p1=&ch1[1];
 cout<<p1<<" "<<*p1<<" "<<&p<<" "<<&p+1<<endl;
}