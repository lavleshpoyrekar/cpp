#include<iostream>
using namespace std;
int main()
{
    float a=10.5;
    float b=13.5;
    float *ptr=&a;
    (*ptr)++;
    *ptr=b;
    cout<<*ptr<<' '<<a<<' '<<b;
    cout<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    int c=400;
    int*p=&c;
    c=c+1;
    cout<<*p;
}