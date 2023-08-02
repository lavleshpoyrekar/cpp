// CPP program To calculate The Value Of nCr
#include<iostream>
using namespace std;

int fact(int n);

int nCr(int n, int r)
{
	return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
	if(n==0)
	return 1;
	int res = 1;
	for (int i = 2; i <= n; i++)
		res = res * i;
	return res;
}

// Driver code
int main()
{
	int n = 17, r = 5;
	cout << nCr(n, r);
	return 0;
}
