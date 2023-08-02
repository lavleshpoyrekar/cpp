#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossible(vector<int> arr, int n,int mid,int m){
    int cut;
    int totalcut=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid)
        {
            cut=arr[i]-mid;
            
            totalcut=totalcut+cut;
           
        }
   
    }
     
    if(totalcut<=m)
    {  
       
        return true;
        
    }
    else{
        
        return false;
    }

}
int eko_eko(vector<int> arr,int n,int s,int e,int m){
    int mid=s+(e-s)/2;
    
    if(s>e){
        return mid;
    }
    if(ispossible(arr,n,mid,m))
    {
        e=mid-1;
       
    }
    else{
        s=mid+1;
        
    }
    return eko_eko(arr,n,s,e,m);
}
int main()
{
    vector<int> trees = {4 ,42 ,47 ,26 ,46};
    sort(trees.begin(),trees.end());
    int e=trees[trees.size()-1];
    int height=eko_eko(trees,5,0,e,15);
    cout << "Height Prameter " << height << endl;

    return 0;
}