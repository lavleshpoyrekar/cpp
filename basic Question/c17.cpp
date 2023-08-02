//add array element
#include<iostream>
using namespace std;
int main()
{
    int a[100],sum=0,i,size;
    int max;
    cout<<"Enter size of element"<<endl;
    cin>>size;
    cout<<"Enter  element"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
   
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    cout<<"The sum of array element is"<<" "<<sum<<endl;
    return 0;
}
