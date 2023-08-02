//calculate tax
#include<iostream>
using namespace std;
int main()
{

    int tax,income;
    cout<<"Enter income "<<endl;
    cin>>income;
    if(income<=10000)
    {
        cout<<"No tax"<<endl;
    }
    else if(income>10000  && income<100000)
    {
        tax=income*0.1;
        cout<<"tax is"<<" "<<tax<<endl;
    }
     else if(income>100000)
    {
        tax=income*0.25;
        cout<<"tax is"<<" "<<tax<<endl;
    }
    else{
        cout<<"not valid";
    }

    return 0;

}