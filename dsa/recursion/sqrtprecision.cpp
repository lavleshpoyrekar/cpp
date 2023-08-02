#include<iostream>
using namespace std;
long long int sqrt(int e,int s,int n,int ans){
    
    cout<<"n"<<n<<endl;
    long long int mid=s+(e-s)/2;
    cout<<endl<<"mid"<<mid<<endl;
    long long int sqr=mid*mid;
    cout<<"sqr"<<sqr<<"n"<<n<<endl;
   if(s>e){
    return ans ;
    cout<<"hi"<<ans;
   }
   if(sqr==n)
   { 
    cout<<"hi"<<mid<<endl;
    ans=mid;
    return ans;
   }
   if(sqr<n){
    ans=mid;
    cout<<ans<<" while ans"<<endl;
    s=mid+1;
    cout<<"s"<<s<<endl;
   }
   else{
    e=mid-1;
    cout<<"e"<<e<<endl;
   }
   return sqrt(e,s,n,ans);
    
}
double morePrecision(int n,int tempsol,int precision)
{
    double factor=1;
    double  ans=tempsol;
    for(int i=0;i<precision;i++)
    {   
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main() {
    int e;
    
    cout <<" Enter the number " << endl;
    cin >> e;
    int n=e;

     int tempSol = sqrt(e,0,n,-1);
    
    cout<<tempSol;
     cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}