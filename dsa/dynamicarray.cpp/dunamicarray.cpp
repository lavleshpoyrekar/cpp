#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter element"<<endl;
    cin>>n;
    int *arr=new int[n];
    //*(arr+2)=5;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    delete []arr;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}