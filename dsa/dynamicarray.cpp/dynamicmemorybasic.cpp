#include<iostream>
using namespace std;
int main(){
    int *a=new int;
    *a=5;
    cout<<*a<<endl;
    delete a;
    cout<<*a;
}

