#include <iostream>
#include <vector>

using namespace std;

    int countone(vector<vector<int> > arr, int i, int m)
    {
        int count=0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j] == 1)
            {
                count++;
            }
        
        }
        return count;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int rowmax=-1;
	    int maxones=0;
	    for(int i=0;i<n;i++)
	    {
	        int ones=countone(arr,i,m);
	        if(ones>maxones ){
	            maxones=ones;
	            rowmax=i;
	            
	        }
	        
	    }return rowmax;
	}

int main()
{
    // Example usage
    vector<vector<int>> arr = {{0, 1, 1, 1},
           {1, 1, 1, 1},
           {1, 0, 1, 1},
           {0, 0, 0, 0}};

    int n = arr.size();    // Number of rows
    int m = arr[0].size(); // Number of columns

    int rowWithMaxOnes = rowWithMax1s(arr, n, m);

    cout << "Row with the maximum number of 1s: " << rowWithMaxOnes << endl;

    return 0;
}
