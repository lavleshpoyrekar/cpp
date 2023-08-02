#include <iostream>
#include<math.h>
using namespace std;

int main()
{    
   int amt, note,num,rem;
   cout<<"ENTER AMOUNT"<<endl;
   cin>>amt;
   while(amt!=0){
   cout<<"Enter Amt. of note which have to find"<<endl;
   cin>>note;
   
   switch (note)
   {
   case 100:
    num=amt/100;
    
    rem=amt%100;
    if (num==0)
    {
       cout<<"This is not possible"<<endl;
    }
    else{
        cout<<num<<endl; 
    }
    break;

    case 50:
    num=amt/50;
    
    rem=amt%50;
     if (num==0)
    {
       cout<<"This is not possible"<<endl;
    }
    else{
        cout<<num<<endl; 
    }
    break;

    case 20:
    num=amt/20;
   
    rem=amt%20;
     if (num==0)
    {
       cout<<"This is not possible"<<endl;
    }
    else{
        cout<<num<<endl; 
    }
    break;

    case 10:
    num=amt/10;
  
    rem=amt%10;
     if (num==0)
    {
       cout<<"This is not possible"<<endl;
    }
    else{
        cout<<num<<endl; 
    }
    break;

    case 5:
      cout<<"This is not possible"<<endl;
      break;
   
   default: cout<<"Invalid Input"<<endl;
    exit;
   } 
  
   amt=rem;}
cout<<"process complete" <<endl;
}