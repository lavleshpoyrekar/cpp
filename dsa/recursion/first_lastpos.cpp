#include <iostream>
#include<vector>
using namespace std;


int firstpos(vector<int>arr,int s,int e,int k,int ans)
{ 
if(s>e){
    return ans;
}
int mid=s+(e-s)/2;
if(arr[mid]==k ){
  ans=mid;
  e = mid - 1;

}
else if(arr[mid]<k){
    s=mid+1;
}
else{
    e=mid-1;
}
 return firstpos(arr,s,e,k,ans);
}

int lastpos(vector<int>arr,int s,int e,int k ,int ans)
{ 

if(s>e){
    return ans;
}
int mid=s+(e-s)/2;
if(arr[mid]==k ){
      ans=mid;
      s = mid + 1;      
      
}
else if(arr[mid]<k){
    s=mid+1; 
}
else{
    e=mid-1;
}

return lastpos(arr,s,e,k,ans);

}
pair<int, int> firstAndLastPosition(vector<int>& arr, int s,int e, int k)
{
    pair<int,int> p;
    p.first = firstpos(arr, 0, 6,k,-1);
    p.second = lastpos(arr, 0,6, k,-1);
    
    return p;
}
int main()
{   
    vector<int> arr = {1, 3, 3, 3, 3, 3, 4};
    pair<int, int> result = firstAndLastPosition(arr, 0,6, 3);
    cout << "First occurrence: " << result.first << endl;
    cout << "Last occurrence: " << result.second << endl;
}
