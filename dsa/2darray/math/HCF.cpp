#include <iostream>
#include <vector>

using namespace std;

int gcd(int a,int b){
    if(a==0)
    {
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
   
}
int main()
{
    int ans=gcd(12,18);
    cout<<ans;
}