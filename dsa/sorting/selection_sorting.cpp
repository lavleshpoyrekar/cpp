#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int selection_sort(vector<int>arr,int n){
    
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for (int j = i+1; j < n; j++){
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
         
        }
    swap(arr[minindex],arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}
int main()
{
    vector<int> arr = {6 ,2 ,8 ,4, 10};
    int n=5;
    selection_sort(arr, n);

    

    return 0;
}
