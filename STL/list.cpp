#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
void display(list<int> &l)
{
 list<int> :: iterator it;
 for ( it = l.begin(); it != l.end(); it++)
 {
   cout<<*it<<" ";
 }
 
}
void display1(list<string> &s)
{
 list<string> :: iterator it1;
 for ( it1 = s.begin(); it1 != s.end(); it1++)
 {
   cout<<*it1<<" ";
 }
 
}
int compare_funtion(string &s1,string &s2)
{
  return(s1.length()>s2.length());
}
int main()
{
 list<int>l1{1,5,3,9};
list<int> :: iterator its=l1.begin();
 display(l1);
 cout<<endl;
 l1.insert(its,5);
 display(l1);
 cout<<endl;
 list<int>l2{4,6,32,19};
 list<int> :: iterator iter=l2.begin();
 l2.insert(l2.begin(),l1.begin(),l1.end());
 display(l2);
 cout<<endl;
 l2.insert(iter,3);
 l2.reverse();
 display(l2);
 cout<<endl;
 l2.sort();
 display(l2);
 cout<<endl;
 list<string>l3{"h","hhhh","hh"};
 l3.sort();
 display1(l3);
 cout<<endl;
 l3.sort(compare_funtion);
 display1(l3);
 cout<<endl;
 ++its;
 
 l1.splice(its,l2); // enter specific element or list at specific position in list
 display(l1);
 cout<<endl;
 l1.merge(l2);
 display(l1);
 return 0;
}