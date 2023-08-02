#include <iostream>
#include<math.h>
using namespace std;
int cheak_set_bit(int n)
{
    int i=0;
 while(n!=0)
 {
    if(n & 1)
    {
       i++;
    }
    n=n>>1;
    
 }
 return i;
}
int main()
{   
    int a,b;
    cout <<"Enter Value of a and b"<<endl;
    cin>>a>>b;
    int c=cheak_set_bit(a);
    int d=cheak_set_bit(b);
    int ans=c+d;
    cout<<"No. of set(1) bits are "<<ans<<endl;

}