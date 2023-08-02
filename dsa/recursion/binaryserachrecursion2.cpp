#include<iostream>
using namespace std;
void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
int binarysearch(int arr[],int s,int e,int k){
    print(arr,s,e);
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    cout<<"mid "<<mid<<endl;
    if(arr[mid]==k){
        return mid;
    }
   if(arr[mid]<k){
    return binarysearch(arr,mid+1,e,k);}
   else{
      return binarysearch(arr,s,mid-1,k);  
    }
   }
int main(){
    int arr[5]={1,2,4,5,6};
    int ans=binarysearch(arr,0,4,4);
    cout<<ans;
}