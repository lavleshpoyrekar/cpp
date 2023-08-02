#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n==0 || n==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remaing_part=issorted(arr+1,n-1);
        return remaing_part;
    }
}
int main(){
    int arr[5]={1,2,6,5,6};
    bool ans=issorted(arr,5);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else {
        cout<<"array is not sorted"<<endl;
    }
}