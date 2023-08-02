#include <iostream>
using namespace std;
#include <map>
#include <string>
#include <unordered_map>
#include <set>
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sortOne(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while(left<right){
    while (arr[left] == 0 && left < right)
    {
        left++;
    }
    while (arr[right] == 2  && left < right)
    {
        right--;
    }
    if (left < right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    if (arr[left]>arr[right] )
    {
        swap(arr[left], arr[right]);

    }
    }
}
int main()
{
    int arr[8] = {2,2,0,1,2,0,0,0};
    sortOne(arr, 8);
    printarray(arr, 8);
}
