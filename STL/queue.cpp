#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
void display(queue<int>&q)
{  
   while (!q.empty())   // to print quue
   {
       cout<<q.front()<<" ";
       q.pop(); // remove element fromfront side
   } 
}
int main()

{  
    
    queue<int>q1;
    q1.push(2);
    q1.push(6);
    q1.push(4);
    cout<<q1.front();
    cout<<endl;
     display(q1);
  
}