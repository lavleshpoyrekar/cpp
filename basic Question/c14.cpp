//insert record of student
#include<iostream>
using namespace std;
struct student
{
  int roll;
  char name[20];
  float marks;

}s[100];
int main()
{
    int i,n;
    cout<<"Enter No. of student"<<endl;
    cin>>n;
    cout<<"Enter student record"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Roll NO"<<endl;
        cin>>s[i].roll;
        cout<<"Enter Name of student"<<endl;
        cin>>s[i].name;
        cout<<"Enter Marks"<<endl;
        cin>>s[i].marks;
    }
    cout<<"student record"<<endl<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Roll NO"<<"="<<s[i].roll<<endl;
      
        cout<<"Name of student"<<"="<<s[i].name<<endl;
        
        cout<<"Marks"<<"="<<s[i].marks<<endl<<endl;
       
    }
    return 0;
}