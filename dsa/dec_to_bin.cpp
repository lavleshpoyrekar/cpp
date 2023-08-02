#include <iostream>
#include<math.h>
using namespace std;

int main()
{    
    
    float ans=0;
    int n;
    int i=0;
   cout<<"Enter no."<<endl;
   cin>>n;
   while(n!=0)
   {
    int bit=n&1;
    ans=(bit*pow(10,i))+ans;
    n=n>>1;
    i++;
   }

  cout<<ans;
}