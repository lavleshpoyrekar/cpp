#include<iostream>
#include<vector>
using namespace std;
bool linearsearch(int arr[],int n,int key){
    
    if(n==0 ){
        return 0;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaing_part=(arr+1,key,n-1);
        return remaing_part;
    }
}
int main(){
    int arr[5]={1,2,6,5,6};
    bool ans=linearsearch(arr,5,5);
    if(ans){
        cout<<"key found"<<endl;
    }
    else {
        cout<<"key not found"<<endl;
    }
}