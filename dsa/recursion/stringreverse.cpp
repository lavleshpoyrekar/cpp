#include<iostream>
using namespace std;
void reversestring(string &name,int s,int e)
{
   if(s>e){
    return ;
   }
   swap(name[s],name[e]);
   reversestring(name,s+1,e-1);
}
int main()
{
    string name="abcde";
    int s=0;
    int n=name.size()-1;
    reversestring(name,s,n);
    cout<<name;

}