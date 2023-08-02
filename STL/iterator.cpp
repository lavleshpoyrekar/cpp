#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v1={1,2,3,4,5,6,7};
    vector<int>::iterator it,it1,it2,it3;
    it=v1.begin(); 
    it1=v1.end();
    cout<<distance(it,it1)<<endl; //distance betwin two iterator
    cout<<*it<<endl;
    advance(it,3);   // shift iterator
    cout<<*it<<endl;
    it2=prev(it1,3); //new iterator which point to the n position from present iterator
    cout<<*it2<<endl;
     it3=next(it,1);  //new iterator which point to the n position from present iterator
    cout<<*it3<<endl;
}