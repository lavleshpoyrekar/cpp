#include<iostream>
#include<vector>
using namespace std;

void Insertion(vector<int> arr,int n)
{
    int s=1;
    
    while (s<n)
    {   
        int temp=arr[s];
        int e=s-1;
        while(e>=0)
        {
            if(arr[e]>temp){
                arr[e+1]=arr[e];
                
            }
            else {
                break;
            }
            e--;
        }
         
        arr[e+1]=temp;
        
        s++;
    }
 for (int i = 0; i < 6; i++)
 {
    cout << arr[i]<<" ";
 }
}

 int main()
 {
    vector<int> arr={5,2,8,3,1,6};

    Insertion(arr,6);



 }