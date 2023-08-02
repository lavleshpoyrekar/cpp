#include <iostream>
#include<math.h>
using namespace std;

bool iseven(int a){
     int b = a&1;
}
int main()
{  
    int a;
    cout<<"enter no."<<endl;
    cin>> a;
    if(iseven(a))
    {
        cout<<"no is odd"<<endl;
    }
    else{
      cout<<"no is even"<<endl;
    }


}
