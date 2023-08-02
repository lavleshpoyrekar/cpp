#include <iostream>
using namespace std;

int main()
{
    int n;
    int a;
    cout << "enter number" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        a=1;
        for (int j = n; j>=i; j--)
        {

            cout << a;
            a=a+1; 
           
        }
        for (int p = 1; p<=i-1; p++)
            { 

                cout<<"*";
            }
        for (int q = 1; q<=i-1; q++)
            {

                cout <<"*";
            }
        for (int r = n; r>=i; r--)
            {

                cout << r+1-i;
            }  
        cout << endl;
    }
}