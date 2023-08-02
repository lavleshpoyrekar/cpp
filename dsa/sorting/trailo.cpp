#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    int s = 1;
    int e = s - 1;
    while (s < n)
    {   
        int temp = arr[s];
        e = s - 1;  // Reset e to s - 1 at the beginning of each iteration
        while (e >= 0)
        {
            if (arr[e] > temp)
            {
                arr[e + 1] = arr[e];
                e--;
            }
            else {
                break;
            }
        }
        arr[e + 1] = temp;
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

    insertionSort(6,arr);



 }