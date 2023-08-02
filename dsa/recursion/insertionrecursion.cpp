#include<iostream>
using namespace std;
void insertion(int arr[],int s,int n)
{
    if(n==0 || n==1)
    {
        return ;
    }

   int e=s-1;
   int temp=arr[s];
   
   while(e>=0)
   {  
      
      if(arr[e]>temp){
        arr[e+1]=arr[e];
       
      }
      else{
        break;
      }
      e--;
      
    
   }
   arr[e+1]=temp;
   
   insertion(arr,s+1,n-1);
}
int main(){
    int arr[5]={1,9,6,5,6};
    insertion(arr,1,5);
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
}