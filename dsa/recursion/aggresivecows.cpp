#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossible(vector<int>arr,int n,int k,int mid){
    cout<<"mid"<<mid<<endl;
   int cowcount=1;
   int cowpos=arr[0];
   cout<<endl<<"n"<<n<<endl;
   for (size_t i = 0; i < n; i++)
   {
    if((arr[i]-cowpos)>=mid){
        
        cowcount++;
        cout<<"cowcount"<<cowcount<<endl;
        cowpos=arr[i];
        if(cowcount==k){
            return true;
            } 
    }
   
    cout<<cowpos<<" cowpos"<<endl;
   }
   return false;
}
int aggresivecows(vector<int>arr,int n,int s,int e,int ans,int k){
    int mid=s+(e-s)/2;
    if(s>e)
    {
        return ans;
    }
    if(ispossible(arr,n,k,mid)){
        ans=mid;
        s=mid+1;
        cout<<"s "<<s<<endl;
        cout<<"e "<<e<<endl;
        cout<<"ans "<<ans<<endl;
    }
    else{
        e=mid-1;
        cout<<"s"<<s<<endl;
        cout<<"e"<<e<<endl;
    }
    return aggresivecows(arr,n,s,e,ans,k);
}
int main()
{
    vector<int> cows = {87, 93, 51, 81, 68 ,99 ,59 };
    sort(cows.begin(),cows.end());
    int s=0;
    int n=cows.size();
    cout<<endl<<endl<<"//n//"<<n<<endl;
    int e=cows[n-1];
    
    int distance=aggresivecows(cows,n,s,e,-1,4);
    cout << "distance " << distance << endl;

    return 0;
}