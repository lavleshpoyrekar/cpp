#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool possible(vector<int>arr,int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for (int i = 0; i < n ; i++)
    {
        if(pagesum+arr[i] <=mid){
            pagesum+=arr[i];

        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
        
        pagesum=arr[i];
        }
    
         if (studentcount>m)
        {
        return false;
        }
       }   
   return true; 
}

int bookallocation(vector<int>arr,int n,int m)
{
    int s=0;
    int sum=0;
    int ans=-1;
    for (int i = 0; i < n; i++)
    {
       sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(possible(arr, n, m,mid))
        {   
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}