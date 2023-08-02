//search any element in array
#include<iostream>
using namespace std;
int main()
{
    int a[100],search,i,size,b;
    bool found;
    int max;
    cout<<"Enter size of element"<<endl;
    cin>>size;
    cout<<"Enter  element"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
   cout<<"search element "<<endl;
   cin>>search;
    for(i=0;i<size;i++)
    {
   if(a[i]==search)
   {   
       found=true;
       cout<<"present"<<endl;
       b=a[i];
       cout<<"The position of element is "<<i;
       break;
    }
   else
   {

       found=false;
   }
    }
    if(found==false){
    cout<<"not present";}
   
   return 0;
}
