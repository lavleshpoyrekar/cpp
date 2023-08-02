#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row and col"<<endl;
    cin>>row>>col;
    int **arr= new int*[row];
    int sizes[]={4,3,2};
    for(int i=0;i<row;i++){
        arr[i]=new int[sizes[i]];
        
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<sizes[i];j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<sizes[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<sizes[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}