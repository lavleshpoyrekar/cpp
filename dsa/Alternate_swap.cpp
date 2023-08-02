#include <iostream>
using namespace std;
int reverse(int arr[],int size)
{   
  
    for (int i = 0; i < size; i+=2)
    {
      if(i+1<size)
      {
        swap(arr[i],arr[i+1]);
      }
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