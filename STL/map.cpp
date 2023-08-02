#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
void display(map<string,int> &m)
{
 map<string,int> :: iterator it;
 for ( it = m.begin(); it != m.end(); it++)
 {
   cout<<(*it).first<<" "<<(*it).second<<endl;;
 }
 cout<<endl;
}
int main()
{
    map<string,int>m1;
    m1["Rohit"]=45;
    m1["Sachin"]=10;
    m1["virat"]=18;
    display(m1);
  
    map<string,int>m2(m1.begin(),m1.end());//copy m1 into m2
    display(m2);
    cout<<m1["virat"]<<endl;;
    cout<<m1.at("Rohit")<<endl;
    m1.at("Rohit")=23;   //change value of key
    display(m1);
    m1["Rohit"]=45;  //change value of key
    display(m1);
    m1.insert(pair<string,int>("MSD",7));
    display(m1);
    m1.insert(make_pair("GG",34));
    display(m1);
    map<string,int>::iterator i,j;
    i=m1.find("Rohit");
    j=m1.find("virat") ;
    map<string,int>m4;
    m4.insert(i,j);  //insert with help of pointer
    display(m4);
    m4.erase(i,j);
    display(m4);
}