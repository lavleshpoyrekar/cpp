#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
void display(deque<int> &d)
{
 deque<int> :: iterator it;
 for ( it = d.begin(); it != d.end(); it++)
 {
   cout<<*it<<" ";
 }
 
}
int main()
{ deque<int> d1;
  d1.push_back(10);
  d1.push_front(60);
  d1.push_back(50);
  d1.push_front(90);
 display(d1);
 cout<<endl;
 cout<<" size "<<d1.size()<<endl;
 cout<<"max size "<<d1.max_size()<<endl;
 cout<<" element at 2 :"<<d1.at(2)<<endl;
 cout<<" front element "<<d1.front()<<endl;
 cout<<" back element "<<d1.back()<<endl;
 cout<<" front element remove "<<endl;
 d1.pop_front();
 display(d1);
 cout<<endl;
 cout<<" back element remove "<<endl;
 d1.pop_back();
 display(d1);
 
}