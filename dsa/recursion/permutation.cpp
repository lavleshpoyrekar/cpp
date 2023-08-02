#include<iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>> &ans,vector<int>nums,int index){
    if (index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (size_t i = index; i < nums.size(); i++)
    {
        swap(nums[index],nums[i]);
        solve(ans,nums,index+1);
        swap(nums[index],nums[i]);

    }
    
    
}
vector<vector<int>> permutation(vector<int>nums){
  vector<vector<int>> ans;
  int index=0;
  solve(ans,nums,index) ;
  return ans;
}
int main(){
 vector<int>nums={1,2,3};
 vector<vector<int>>final=permutation(nums);
 for (int i = 0; i < final.size(); i++) {
        for (int j = 0; j < final[i].size(); j++)
            cout << final[i][j] << " ";
        cout << endl;
    }
 
}