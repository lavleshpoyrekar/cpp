//Inserting array element in any position
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int pos,num,i,size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    cout<<"enter element"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter position and number"<<endl;
    cin>>pos>>num;
    for(i=size;i>pos;i--)
    {
        a[i]=a[i-1];}
        
    
    a[pos]=num;
    size++;
    cout<<"new array"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
    
 return 0;
}
