#include<iostream>
using namespace std;
void addrow(int arr[][3],int i,int j){

for(int i=0;i<3;i++)
  {
    int sum=0;
    for (int j = 0; j < 3; j++)
    {
        sum+=arr[i][j];
    }
    cout << sum <<" ";
    
  }
}
void addcol(int arr[][3],int i,int j){

for(int j=0;j<3;j++)
  {
    int sum=0;
    for (int i = 0; i< 3; i++)
    {
        sum+=arr[i][j];
    }
    cout << sum <<" ";
    
  }
}
int main()
{

    int arr[3][3];
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    addrow(arr,3,3);
    addcol(arr,3,3);
    
}