#include <iostream>
using namespace std;

int update(int *p)
{  
    int sum=0;
    cout<<"hi"<<sizeof(*p)<<endl;
    for(int i=0; i<5; i++){
        sum=sum+*p;

    }
    return sum;
    
}
int main()
{
 int a[]={1,2,3,4,5};
 int *p=a;
 cout<<sizeof(a)<<endl;
 cout<<sizeof(p)<<endl;
 cout<<sizeof(*p)<<endl;
 cout<<sizeof(&p)<<endl;
 int ans=update(p);
 cout<<ans;
 
 
}