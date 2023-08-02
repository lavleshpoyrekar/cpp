#include <iostream>
#include<math.h>
using namespace std;

bool iseven(int a){
    if(a&1){
        return 0;//odd
    }
    else {
        return 1;//even
    }
}
int main()
{  
    int a;
    cout<<"enter no."<<endl;
    cin>> a;
    if(iseven(a))
    {
        cout<<"no is even"<<endl;
    }
    else{
      cout<<"no is odd"<<endl;
    }


}
