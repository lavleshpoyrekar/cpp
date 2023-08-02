#include <iostream>
#include<math.h>
using namespace std;
int sum(int arr[],int size)
{   
    int s=0;
    for (int i=0;i<size;i++)
    {
        s=s+ arr[i];
    }

    return s;
}
int main()
{ 
    int Array[100];
    cout<<"enter array element"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cin>>Array[i]; 
    }
    int ans=sum(Array,5);
    cout<<"sum is "<<ans<<endl;

}