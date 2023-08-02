#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int arrayindex=s;
    
    for(int i=0;i<len1;i++){
        first[i]=arr[arrayindex++];
       
    }
    arrayindex=mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i]=arr[arrayindex++];
    }

    arrayindex=s;
    int index1=0;
    int index2=0;
    while(index1<len1 && index2 <len2){
     if(first[index1]<second[index2])
     {
        arr[arrayindex++]=first[index1++];
     }
     else
     {
        arr[arrayindex++]=second[index2++];
     }}
     while(index1<len1){
         arr[arrayindex++]=first[index1++];
     }
     while(index2<len2){
         arr[arrayindex++]=second[index2++];
     }
    delete []first;
    delete []second;
    }
    

void mergesort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
 int arr[5]={4,8,1,8,5};
 mergesort(arr,0,4);
 for (size_t i = 0; i < 5; i++)
 {
    cout<<arr[i]<<" ";
 }
 
}