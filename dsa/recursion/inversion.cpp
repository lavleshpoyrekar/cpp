#include<iostream>
using namespace std;
int merge(int arr[],int s,int e){
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
    int inversion=0;
    while(index1<len1 && index2 <len2){
     if(first[index1]<second[index2])
     {
        arr[arrayindex++]=first[index1++];
     }
     else
     {
        arr[arrayindex++]=second[index2++];
        inversion+=len1-index1;
     }}
     while(index1<len1){
         arr[arrayindex++]=first[index1++];
     }
     while(index2<len2){
         arr[arrayindex++]=second[index2++];
     }
    delete []first;
    delete []second;
    return inversion;
    }
    

int mergesort(int arr[],int s,int e){
    int inversion=0;
    if(s>=e){
        return inversion;
    }
    int mid=s+(e-s)/2;
    
    inversion += mergesort(arr,s,mid);
    inversion += mergesort(arr,mid+1,e);
    inversion+=merge(arr,s,e);
    return inversion;
}

int main(){
 int arr[2]={ 1, 0};
 int ans=mergesort(arr,0,2);
 cout<<"Inversion count is "<<ans;

 
}