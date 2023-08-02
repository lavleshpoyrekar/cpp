#include<iostream>
using namespace std;
void reversestring(string &name,int s,int e){
    cout<<"string processing "<<name<<endl;
    if(s>e){
        return ;
    }
   swap(name[s],name[e]);
   s++;
   e--;
   reversestring(name,s,e);

}
int main(){
    string name="lavlesh";
    int e=name.length()-1;
    reversestring(name,0,e);
    cout<<name<<endl;
}