#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int prev1=0;
    int prev2=1;
    int prev3;
    for (int i = 2; i <= n; i++)
    {
        prev3=prev1+prev2;
        prev1=prev2;
        prev2=prev3;
        
    }
    return prev3;
}
int main()
{
    cout<<"enter element"<<endl;
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans;
}