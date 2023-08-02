
#include<iostream>
using namespace std;

void update(int &a,int&b) {
    int olda=a;
    a=a+b;
    olda>b? b=olda-b :b=b-olda;
    
}

int main() {
   
    int a,b;
    cin>>a>>b;
    int *aPointer = &a;
    int *bPointer=&b;
    update(a,b);
    cout<<a<<endl<<b;
    return 0;
}  