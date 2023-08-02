#include <iostream>
using namespace std;

int main()
{
    int n,a=1;
while(a > 0){
    cout << "enter no." << endl;
    cin >> n;
    bool isprime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "it is not prime no." << endl;
    }
    else
    {
        cout << "it is  prime no." << endl;
    }
 }
}