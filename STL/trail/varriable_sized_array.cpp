#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int n, q, i, j, l, value;
  cin >> n >> q;
  vector<vector<int>> v1;
  for (i = 0; i < n; i++)
  {
    vector<int> v2;
    cin >> l;

    for (j = 0; j < l; j++)
    {
      cin >> value;
      v2.push_back(value);
    }
    v1.push_back(v2);
  }
  for (int k = 0; k < q; k++)
  {
    cin >> i >> j;
    cout << v1[i][j] << endl;
  }
  return 0;
}
