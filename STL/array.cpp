#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    //syntax//
    //array<object_type,size>array_name//
    array<int,5>a={7,2,8,4,5};
    cout<<a.at(2)<<endl; //print element at position 3
    cout<<a.front()<<endl;//return first element of array
    cout<<a.back()<<endl;//return first element of array
    array<int,5>b;
    b.fill(1);//fill array element with 1//
    int i;
    for ( i = 0; i < 5; i++) //print array//
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
     for ( i = 0; i < 5; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    a.swap(b);  //swap two array
    cout<<"after swaping";
    cout<<endl;
    cout<<" a :"<<endl;
    for ( i = 0; i < 5; i++) //print array//
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<" b :"<<endl;
  
     for ( i = 0; i < 5; i++)
    {
        cout<<b[i]<<" ";
    
    }
    cout<<endl;
    cout<<a.empty()<<endl;//cheak array empty or not
    cout<<a.size()<<endl;//size of array
    cout<<a.max_size()<<endl;//maxsize of array
    
    cout<<"using pointer"<<endl; // cout using iterator
     for ( auto it = a.begin(); it != a.end(); it++)
    {
        cout<<*it<<" ";
    
    }
    cout<<endl;
   sort(begin(b),end(b));
   cout<<"after sorting in ascending order"<<endl;
   
     for ( i = 0; i < 5; i++)
    {
        cout<<b[i]<<" ";
    
    }
    cout<<endl;
    sort(begin(b),end(b),greater<>());
   cout<<"after sorting in descending order"<<endl;
   
     for ( i = 0; i < 5; i++)
    {
        cout<<b[i]<<" ";
    
    }
}