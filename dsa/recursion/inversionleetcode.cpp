 #include<iostream>
 #include<vector>
 using namespace std;
 int merge(vector<int> &nums,int s,int e)
    {
        int mid=s+(e-s)/2;
        int len1=mid-s+1;
        int len2=e-mid;
        int *first=new int[len1];
        int *second=new int[len2];
        
        int arrayindex=s;
        for(int i=0;i<len1;i++){
            first[i]=nums[arrayindex++];
        }
        arrayindex=mid+1;
        for(int i=0;i<len2;i++){
            second[i]=nums[arrayindex++];
        }
        int inv=0;
        arrayindex=s;
        int index1=0;
        int index2=0;
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                nums[arrayindex++]=first[index1++];
                
            }
            else{
                 nums[arrayindex++]=second[index2++];
                 inv+=len1-index1;
            }
        }
            while(index1<len1)
            {
              nums[arrayindex++]=first[index1++];  
            }
            while(index2<len2)
            {
              nums[arrayindex++]=second[index2++];  
            }
        
        return inv;
    }
    int mergesort(vector<int> &nums,int s,int e){
        int inv=0;
        if(s>=e){
            return inv;
        }
        int mid=s+(e-s)/2;
        inv+=mergesort(nums,s,mid);
        inv+=mergesort(nums,mid+1,e);
        inv+=merge(nums,s,e);
        return inv;
    }
    bool isIdealPermutation(vector<int>& nums) {
        int local=0;int global=0;
        int n=nums.size()-1;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[i+1]){
                local++;
            }
        }
        cout<<local<<endl;
        global=mergesort(nums,0,n);
        cout<<global<<endl;
        if(local==global){
            return true;
        }
      return false;
    }
int main(){
    vector<int> arr={1,0};
    int ans=isIdealPermutation(arr);
    cout<<ans;
    
}