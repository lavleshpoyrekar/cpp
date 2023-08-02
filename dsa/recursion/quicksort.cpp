#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int s,int e){
  int pivot=arr[s];
  int cnt=0;
  for (int i = s; i < e; i++)
  {
    if(arr[i]<arr[s]) {cnt++;}
  }
  int pivotindex=s+cnt;
  swap(arr[pivotindex],arr[s]);
  int i=s;
  int j=e;
 while(i< pivotindex && j> pivotindex){
      while(arr[i]<=pivot){
        i++;
    }
        while(arr[j]>pivot){
        j--;
    }
    if(i< pivotindex && j> pivotindex)
    {
        swap(arr[i++],arr[j--]);
    }
 }
  
return pivotindex;
  
}
void quicksort(vector<int>&arr,int s,int e){
    if(s>=e){
        return ;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}
int main()
{
    vector<int> arr={3,5,1,2,8};
    quicksort(arr,0,arr.size()-1);
    for (size_t i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
