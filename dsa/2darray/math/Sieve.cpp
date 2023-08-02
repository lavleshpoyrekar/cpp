#include <iostream>
#include <vector>

using namespace std;
int main(){


int n=50;
vector<bool> prime(n+1,true);
for (int i = 0; i < n+1; i++)
{
    cout<<prime[i]<<" ";
}
cout<<endl;
int count=0;
prime[0]=prime[1]=false;
for(int i=2;i*i<=n;i++){
   
    if(prime[i])
    {   
        
        
        for (int j = i*i; j <= n; j=j+i)
        {
            prime[j]=0;
        }
        
    }

}
for (int i = 0; i < n+1; i++)
{
    cout<<prime[i]<<" ";
}
cout<<endl;
for(int i=0;i<=n;i++)
{
    if(prime[i])

    {  
        count++;
        cout<<i<<" ";
    }
}
cout<<endl;
cout<<count ;
}
