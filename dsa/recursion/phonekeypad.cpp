#include<iostream>
#include<vector>
using namespace std;
void solve(string digits,vector<string>&ans,string output,string mapping[],int index){
    if(index>=digits.length()){
        ans.push_back(output);
        return;
    }
    int number=digits[index]-'0';
    string value=mapping[number];
    for (size_t i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits,ans,output,mapping,index+1);
        output.pop_back();
    }
    

}
vector<string> lettercombination(string digits){
    vector<string> ans;
    if(digits.size()==0){
        return ans;
    }
    string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output;
    int index=0;
    solve(digits,ans,output,mapping,index);
    return ans;

}
int main(){
string digit="23";
vector<string>final=lettercombination(digit);
 for(int i=0; i < final.size(); i++)
   cout << final.at(i) << ' ';}