#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int bubble_sort(vector<int>arr,int n){
    
    
    for(int i=0;i<n-1;i++){

        bool swapcount=false;
        
        for (int j = 0; j < n-i-1; j++){
            if(arr[j+1]<arr[j])
            {
                swap(arr[j],arr[j+1]);
                swapcount = true;
            }     
        }
        if (swapcount == false) {
          break;
        }
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
    bubble_sort(arr, n);

    

    return 0;
}