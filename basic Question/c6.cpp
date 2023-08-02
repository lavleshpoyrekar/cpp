//mirror matrix genration

#include<iostream>
using namespace std;
int main()
{
    
    int mat1[2][2],i,j;
    cout<<"enter first matrix element"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>mat1[i][j];
        }
    }
    
    cout<<"first matrix element"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<mat1[i][j];
        }
        cout<<endl;
    }
   
     
    cout<<"mirror of matrix element"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=1;j>=0;j--)
        {
            cout<<mat1[i][j];
        }
        cout<<endl;
    }
    return 0;
}