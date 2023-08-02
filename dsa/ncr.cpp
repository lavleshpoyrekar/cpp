#include <iostream>
#include<math.h>
using namespace std;

long fact(int n){
    int factorial=1;
    
    for(int i=1;i<=n;i++)
    {
         factorial=factorial*i;
       
    }
      return factorial;
 }
long ncr( int n, int r)
{
    

    return ((fact(n))/(fact(r)*fact(n-r)));
   
}
int main()
{  

   int n,r;
   cout<<"enter n and r"<<endl;
   cin>>n>>r;
   int ans= ncr(n,r);
   cout<<ans;

}
