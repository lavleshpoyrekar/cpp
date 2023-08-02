
//cheak palindrome or not 
#include<iostream>
using namespace std;
class A
{
    int n,num,digit,rev;
    public:
    void input()
    {
        cout<<"Enter number"<<endl;
        cin>>num;
    }
    void output()
    {
        n=num;
        rev=0;
        while(num>0)
    {
        digit=num%10;
        rev= (rev*10)+digit;
        num=num/10;
    }  
    if(n==rev)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"It is not palindrome"<<endl;
    }
    }

};
int main()
{
     A obj;
     obj.input();
     obj.output();
     return 0;
}