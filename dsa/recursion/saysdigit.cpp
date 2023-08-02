#include<iostream>
using namespace std;
void saysdigit(int n,string arr[]){
    if(n==0){
       return  ; 
    }
    int digit=n%10;
    n=n/10;
    
    saysdigit(n,arr);

    cout<<arr[digit]<<" ";

}


int main()
{
    cout<<"enter element"<<endl;
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    saysdigit(n,arr);
    
}