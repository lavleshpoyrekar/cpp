#include <iostream>
#include<algorithm>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int start =0;int end=n-1;
    int mid= start+(end-start)/2;
    while(start<=end){
        if (arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid= start+(end-start)/2;
    } 
    return -1;  
}
int main(){
    int even[8]={12,13,14,15,16,17,18,19};
   

    int odd[9]={12,32,33,34,43,54,55,67,87};
    
    int ans1=binarysearch(even,8,18);
    int ans2=binarysearch(odd,9,43);
    cout<<ans1<<" "<<ans2<<endl;
    
}