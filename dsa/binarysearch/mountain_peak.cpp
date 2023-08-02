#include <vector>
#include <iostream>
using namespace std;
int mountainpeak(vector<int> &arr)
{

    int s = 0, e = arr.size();
    int mid = s + (e - s) / 2;
    
    while (s < e)
    {

        if (arr[mid] < arr[mid+1])
        {
  
            s= mid + 1;
            cout<<"hi"<<endl;
        }
        else 
        { // Right me jao
            e=mid;
            cout<<"hello"<<endl;
        }
        

        mid = s + (e - s) / 2;
    }
    return s;
}


int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 3, 2, 1};
    int peakIndex = mountainpeak(arr);
    cout << "Peak Index: " << peakIndex << endl;

    return 0;
}