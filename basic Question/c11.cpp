//CONVERT UPECASE LETTER TO LOWECASE AND VICEVERSA
#include<iostream>
using namespace std;
class A
{
    char ch,ch1,ch2;
    public:
    void input()
    {
        cout<<"Enter any character"<<endl;
        cin>>ch;
    }
    void output()
    {
    if(ch>='a' && ch<='z')
    {
       ch1=ch-32;
       cout<<ch1;
    }
    else
    {
        ch2=ch+32;
        cout<<ch2;
    }
    }

};
int main()
{
    A obj;
    obj.input();
    obj.output();
}