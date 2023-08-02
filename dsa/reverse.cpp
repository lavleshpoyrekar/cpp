#include <iostream>
using namespace std;
int reverse(int arr[],int size)
{   
 
 int start=0 ;
 int end=size-1; 
while(start<=end)
 {
 swap(arr[start],arr[end]);
 start++;
 end--;
 
 }
   
}
void printarray(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
   cout<<arr[i]<<" ";
  }
  
}
int main()
{
    int arr[100];
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter array element"<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    reverse(arr,n);
    printarray(arr,n);
    
}