//celcious to faherenhite and viceversa
#include<iostream>
using namespace std;
int main()
{
    int temp,choise;
    cout<<"Menu"<<endl;
    cout<<"1.Fahernheite to celcious"<<endl;
    cout<<"2.Celcious to Fahernheite"<<endl;
    cout<<"Enter Choise"<<endl;
    cin>>choise;
    
    switch(choise)
    {
        case 1:
        cout<<"Enter Temprature in Fahernheite"<<endl;
        cin>>temp;
        temp=(temp-32)/1.8;
        cout<<"Temperature in celcious is"<<" "<<temp;
        break;
         case 2:
        cout<<"Enter Temprature in celcious"<<endl;
        cin>>temp;
        temp=(temp*1.8)+32;
        cout<<"Temperature in Fahernheite is"<<" "<<temp;
        break;
        default:
        cout<<"Choice is not valid"<<endl;
        break;
    
    }

 return 0;
}



    

