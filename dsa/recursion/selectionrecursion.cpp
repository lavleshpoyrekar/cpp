#include<iostream>
using namespace std;
void selection(int arr[],int s,int n)
{  
    cout<<"hello"<<endl;
    if(s>=n-1)
    {
        return ;
    }
    int min=s;
    cout<<arr[min]<<endl;
    for(int j=s+1;j<n;j++)
    {
        if(arr[min]>arr[j])
        {
            min=j;
            cout<<"hii"<<endl;
        }
    }
    cout<<arr[min]<<" "<<arr[s]<<endl;
    swap(arr[min],arr[s]);
    selection(arr,s+1,n);

}
int main(){
    int arr[5]={1,9,6,5,6};
    selection(arr,0,5);
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
}