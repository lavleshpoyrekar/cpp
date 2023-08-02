#include <iostream>
using namespace std;
int n_th(int n){
    return 3*n+7;
}
int main()
{   
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    int ans=n_th(n);
    cout<<ans<<endl;
}