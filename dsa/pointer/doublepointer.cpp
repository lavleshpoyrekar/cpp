#include<iostream>
using namespace std;
int main()
{
  int a=1;
  int *p=&a;
  int **c=&p;
  cout<<&a<<" "<<p<<" "<<*p<<" "<<&p<<endl;
  cout<<&p<<" "<<*c<<" "<<**c<<" "<<&c<<" "<<&*c<<" "<<c<<endl;       
}