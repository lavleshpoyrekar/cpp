#include <iostream>
#include <string>
using namespace std;

int main() {
    
	string a,b,c;
    int i,j,temp;
    cin>>a>>b;
    int l1=a.size();
    cout<<l1<<" ";
    int l2=b.size();
    cout<<l2;
    cout<<endl;
    c=a+b;
    cout<<c<<endl;
   if(l1>0)
   {
     temp=a[0];
     a[0]=b[0];
     b[0]=temp;
     cout<<a<<" "<<b;
   }
   
  
    return 0;
}