#include<iostream>
using namespace std;
int nstairs(int n){
    //base case
    if(n==0) return 1;
    if(n<0) return 0;
    // recursive funtiom
    int ans=nstairs(n-1)+nstairs(n-2)+nstairs(n-3);//if person can climb 3,2 or 1 step at a one time
    return ans;

}int main()
{
    cout<<"enter element"<<endl;
    int n;
    cin>>n;
    int ans=nstairs(n);
    cout<<ans;
}