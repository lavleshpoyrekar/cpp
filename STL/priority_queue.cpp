#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
void display(priority_queue<int>&pq)
{  
   while (!pq.empty())   // to print priority quue
   {
       cout<<pq.top()<<" ";//print greatest element
       pq.pop(); // remove greatest element  
   } 
   cout<<endl;
}
int main()

{  
    
    priority_queue<int>pq1;
    pq1.push(2);
    pq1.push(6);
    pq1.push(4);
    cout<<pq1.top();
    cout<<endl;
    //display(pq1);
    priority_queue<int>pq2;
    pq2.push(7);
    pq2.push(2);
    pq2.push(5);
    //display(pq2);
    pq1.swap(pq2);
    display(pq1);
    display(pq2);
}