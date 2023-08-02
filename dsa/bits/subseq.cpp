#include<iostream>
#include<map>
#include<set>
#include<math.h>
using namespace std;
string subseq(string s,int binary,int len){
    string sub="";
    for (size_t j = 0; j < len; j++)
    {
        if(binary & (1<<j))
            sub+=s[j];
    }  
        return sub;
    
    
    
}
void possibleseq(string s){
    map<int,set<string>>spoted_seq;
    int len=s.size();
    int limit=pow(2,len);
    for (int i = 1; i <=limit-1; i++)
    {
       string sub=subseq(s,i,len);
       spoted_seq[sub.length()].insert(sub);
    }
    for(auto it1:spoted_seq){
        cout<<"sub seq is "<<it1.first<<" are"<<endl; 
        for(auto it2:it1.second){
            cout<<it2<<" ";
            
        }   
        cout<<endl;
        
        }

    
}
int main(){
    string s="aabc";
    possibleseq(s);
    return 0;
}