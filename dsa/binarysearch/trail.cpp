#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool possible(vector<int> &trees, int n,int m,int mid){
long long cutcount=0;

for(int i=0;i<n;i++)
{
    if(trees[i]>mid)
    {   
        long long cut=trees[i]-mid;
        cout<<cut<<endl;
        cutcount=cut+cutcount;
       
    }
   

}
 cout<<"hi"<<cutcount<<" "<<mid<<endl;
 if(cutcount<=m)
        {
            return true;
        }
    
return false;


}

int heightparameter(vector<int> &trees, int n,int m)
{   
    sort(trees.begin(),trees.end());
    int s=0;int ans=-1;
    
    int e=trees[n-1];
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(possible(trees,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;

        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main()
{
   int n,m;
   cin>>n>>m;
   vector<int> trees;
   cout<<"enter array"<<endl;
   for(int i=0;i<n;i++){
   	cin>>trees[i];
   }
    int height=heightparameter(trees,n,m);
    cout<< height << endl;

    return 0;
}