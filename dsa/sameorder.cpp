#include <iostream>
#include<math.h>
using namespace std;

int main()
{    

    int n,digit,i=0;
   cout<<"Enter no."<<endl;
   cin>>n;
   int ans=0;
   while(n!=0)
   {
   
    digit=n%10;
    ans=((digit*pow(10,i))+ans);
    n=n/10;
    i++;
   }
   cout<<ans;




}