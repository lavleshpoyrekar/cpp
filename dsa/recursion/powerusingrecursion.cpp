#include<iostream>
using namespace std;
long long int power(long long int a,long long int b){
    
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
  long long int ans=power(a,b/2);
  if(b%2==0){//even
    return ans*ans;  //2^8=(2^4)*(2^4)  ...... a=2,b=8....a^b=(a^b/2)*(a^b/2)
  }
  else{//odd
     return a*ans*ans;  //2^9=2*(2^4)*(2^4)  ...... a=2,b=9....a^b=a*(a^b/2)*(a^b/2)
  }

}
int main(){
   
    long long int ans=power(1024,5);
    
    cout<<ans<<endl;
}