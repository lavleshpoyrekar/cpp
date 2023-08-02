#include<iostream>
using namespace std;
bool ispossible(string name,int s,int e){
    if(s>e){
        return true;
    }
    if(name[s]!=name[e]){
        return false;
    }
    else{
        return ispossible(name,s+1,e-1);
    }

}
int main(){
 string name="abcfba";
 if(ispossible(name,0,name.size()-1)){
    cout<<"palindrome"<<endl;
 }
 else{
    cout<<"not palindrome"<<endl;
 }

}