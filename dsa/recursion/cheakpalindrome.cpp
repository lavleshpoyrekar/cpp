#include<iostream>
using namespace std;
bool cheaqpalindrome(string &name,int s,int e){
    
    if(s>e){
        return true;
    }
   if(name[s]!=name[e]){
    return false;
   }
  else{
   return cheaqpalindrome(name,s+1,e-1);}
  
}
int main(){
    string name="abcaba";
    int e=name.length()-1;
    bool ans =cheaqpalindrome(name,0,e);
    if (ans)
    {
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"string is not palindrome"<<endl;
    }
    
}