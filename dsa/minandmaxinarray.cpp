#include <iostream>
using namespace std;
#include <limits.h>

int min(int arr[],int size)
{   
 
int mini=INT_MAX; 
for (int i = 0; i < size; i++)
{
mini=min(arr[i],mini);
} 
cout<<"Minimum element is "<<mini<<endl;
}

int max(int arr[],int size)
{    
int maxi=INT_MIN; 
for (int i = 0; i < size; i++)
{
maxi=max(arr[i],maxi);
} 
cout<<"Maximum element is "<<maxi<<endl;
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
    min(arr,n);
    max(arr,n);
   
    
}