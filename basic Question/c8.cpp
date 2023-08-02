//swap two matrix

#include <iostream>
using namespace std;
int main()
{

    int mat1[2][2], i, j, mat2[2][2], temp;
    cout << "enter first matrix element" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "enter second matrix element" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> mat2[i][j];
        }
    }
    cout << "Before swaping" << endl;
    cout << "first matrix element" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << mat1[i][j];
        }
        cout << endl;
    }
    cout << "second matrix element" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << mat2[i][j];
        }
        cout << endl;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            temp = mat1[i][j];
            mat1[i][j] = mat2[i][j];
            mat2[i][j] = temp;
        }
    }
    cout << "After swapping" << endl;
    cout << "First matrix" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << mat1[i][j];
        }
        cout << endl;
    }
    cout << "Second matrix" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << mat2[i][j];
        }
        cout << endl;
    }
    return 0;
}