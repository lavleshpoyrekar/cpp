#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;
 bool compare_funtion(int i,int j)
{
  return i>j;
}
bool compare_string(string i,string j)
{
  return (i.size()==j.size());
}
void display(vector<int> v)
{
  vector<int> :: iterator i;
 for ( i = v.begin(); i != v.end(); i++)
 {
   cout<<*i<<" ";
 }
 cout<<endl;
}
int main()
{   
    int i;
    int arr[5]={5,3,7,9,1};
    sort(arr,arr+5);  //sort bydefault asscending
    for ( i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    vector <int> v1={1,2,3,4,5,6,7};
    vector<int>::iterator it,it1;
    it=v1.begin();
    it1=v1.end();
    cout<<binary_search(it,it1,5); //cheak element present in list
    cout<<endl;
    sort(it,it1,compare_funtion); //sort accroding to given funtion
    display(v1);
     int arr1[6]={5,3,7,9,1,8};
    partial_sort(arr1,arr1+3,arr1+5);
    for ( i = 0; i < 6; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<is_sorted(v1.begin(),v1.end());
    cout<<endl;
    string s[]={"test","flash","ironman","dc"};
    cout<<binary_search(s,s+4,"marvel",compare_string);
    cout<<endl;
    vector<int>v2{1,2,3,3,2,1,5,6,7,8,9};
    vector<int>v3{1,2,3,3,2,1,5,6,7,8,9};
    vector<int>::iterator p,q,r;
    p=lower_bound(v2.begin(),v2.end(),6);
    cout<<*p<<endl;
    q=upper_bound(v2.begin(),v2.end(),6);
    cout<<*q<<endl;
    cout<<count(v2.begin(),v2.end(),5)<<endl; //count particular element in list
    cout<<equal(v2.begin(),v2.end(),v3.begin())<<endl;
    r=search_n(v2.begin(),v2.end(),2,3);
    cout<<*r;
    cout<<endl;
}