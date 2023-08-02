//average and total marks
#include<iostream>
using namespace std;
int main()
{
    int phy,mat,chem,bio,mar,total;
    double avg;
    cout<<"Enter Marks of subject"<<endl;
    cin>>phy>>mat>>chem>>bio>>mar;
    total=phy+mat+chem+bio+mar;
    cout<<"Total marks"<<total<<endl;
    avg=(phy+mat+chem+bio+mar)/5;
    cout<<"Average is"<<avg<<endl;
    return 0;

}
