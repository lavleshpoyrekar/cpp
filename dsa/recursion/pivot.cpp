#include<iostream>
using namespace std;
int getPivot(int arr[],int s,int e,int n){
    if(s>=e)
    {
        return s;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]>=arr[0]){
           s=mid+1;
    }
    else {
        e=mid;
    }
    return getPivot(arr,s,e,n);
}
int main() {
    int arr[6] = {5,6,6,2,3,4};
    cout << "Pivot index " << getPivot(arr, 0,5,5) << endl;
}