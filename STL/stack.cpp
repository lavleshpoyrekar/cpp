#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
void display(stack<int>&s)
{  
   while (!s.empty())   // to print stack
   {
       cout<<s.top()<<" ";
       s.pop(); //remove element from top;
   } 
}
int main()

{  
    
    stack<int>s1;
    s1.push(2);
    s1.push(6);
    s1.push(4);
    cout<<s1.top();
    cout<<endl;
     display(s1);
  
}