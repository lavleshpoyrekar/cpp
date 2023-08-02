//reverse array
#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int size,i,e,s;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    cout<<"enter element"<<endl;
    for(i=0;i<size;i++){
        cin>>a[i];
    }
    e=0;
    s=size-1;
    while(e<s)
    {
        swap(a[s],a[e]);
        s--;
        e++;
    }
      cout<<"reverse array"<<endl;
    for(i=0;i<size;i++)
    {
       
        cout<<a[i];
    }
}
