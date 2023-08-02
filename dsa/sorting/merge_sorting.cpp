#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

int i=0;int j=0; int k=0;  
while (i<n && j<m)
{
    if (arr1[i]<arr2[j])
    {
        arr3[k++]=arr1[i++];
    }
    else{
        arr3[k++]=arr2[j++];
    }

}
while(i<n)
{
    arr3[k++]=arr1[i++];
}
while (j<m)
{
   arr3[k++]=arr2[j++];
}}
void printarray(int arr3[],int k)
{

 for (int i = 0; i < k; i++)
 {
    cout << arr3[i]<<" ";
 }
 cout <<endl;
 
}



 int main()
 {
    int arr1[3]={1,5,7};
    int arr2[5]={2,4,6,8,10};
    int arr3[8]={0};

    merge(arr1,3,arr2,5,arr3);
    printarray(arr3,8);
 }