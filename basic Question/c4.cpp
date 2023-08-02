//highest and lowest element in array

#include<iostream>
using namespace std;
int main()
{
    int a[100],size,i;
    int max;
    cout<<"Enter size of element"<<endl;
    cin>>size;
    cout<<"Enter  element"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
max=a[0];
     for(i=0;i<size;i++)
    {
       if(a[i]<max)//this fpr lowest condition  //for highest   "a[i]>max"
       {
           max=a[i];
       }
    }
    
    cout<<"lowest element"<<" "<<max;

    return 0;

}