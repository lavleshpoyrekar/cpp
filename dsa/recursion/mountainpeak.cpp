#include<iostream>
using namespace std;
int mountainpeak(int arr[],int n,int s,int e){
    
    int mid=s+(e-s)/2;
    if(s>=e){
        return s;
    }
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
        
    }
    else{
        e=mid;
        
    }
    return mountainpeak(arr,n,s,e);
}
int main()
{
    int arr[7]={1,6,5,4,3,2,1};
    int ans=mountainpeak(arr,7,0,4);
    cout<<ans;
}