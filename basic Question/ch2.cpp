#include<iostream>
using namespace std;
int main()
{
   int  a[100],i,e,s,size;
   cin>>size;
   for(i=0;i<size;i++)
   
{
    cin>>a[i];
}
e=0;s=size-1;
while(e<s)
{
    swap(a[s],a[e]);
    s--;
    e++;
}
for(i=0;i<size;i++)
   
{
    cout<<a[i];
}
}