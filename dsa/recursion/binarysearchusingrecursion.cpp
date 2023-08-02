#include<iostream>
using namespace std;
void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
bool binarysearch(int arr[],int s,int e,int k){
    print(arr,s,e);
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    cout<<"mid "<<mid<<endl;
    if(arr[mid]==k){
        return true;
    }
   if(arr[mid]<k){
    s=mid+1;}
   else{
     e=mid-1;  
    }
     return binarysearch(arr,s,e,k);
   }
int main(){
    int arr[5]={1,2,4,5,6};
    bool ans=binarysearch(arr,0,4,2);
    if(ans){
        cout<<"found"<<endl;
    }
    else {
        cout<<"not found"<<endl;
    }
}