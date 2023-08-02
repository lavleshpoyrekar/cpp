//print matrix and its transpose
#include<iostream>
using namespace std;
int main()

{
    
    int mat[2][2],i,j,trans[2][2];
    cout<<"enter element"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"matrix element"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<mat[i][j];
        }
        cout<<endl;
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           trans[j][i]=mat[i][j];
        }
    }
    cout<<"transpose matrix element"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<trans[i][j];
        }
        cout<<endl;
    }
    return 0;
}