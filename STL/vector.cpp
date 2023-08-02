#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v1;
    /* int element,size,i;
    cout<<"size of element"<<endl;
    cin>>size;
    cout<<"Enter element :"<<endl;
    for ( i = 0; i < size; i++)
    {
      cin>>element; 
      v1. push_back(element); // enter element in vector
    }
    vector<int> :: iterator it=v1.begin(); // making iterator
    v1.insert(it+4,56); //inserting element
    v1.pop_back(); //remove last element
    v1.erase(it);  // remove element where iterator point
    for ( it = v1.begin(); it != v1.end(); it++)
    {
     
      cout<<*it<<" ";
    }
    cout<<endl; */
    vector<int>v2{ 2,6,1,9};
     vector<int>v3{ 6,5,0,87};
     vector<int> :: iterator it=v2.begin();
     vector<int> :: iterator it1=v3.begin();
      for ( it = v2.begin(); it != v2.end(); it++)
    {
     
      cout<<*it<<" ";
    }
    cout<<endl;
    
     for ( it1 = v3.begin(); it1 != v3.end(); it1++)
    {
     
      cout<<*it1<<" ";
    }
    cout<<endl;
    cout<<v2.size();
    cout<<endl;
    cout<<"After swaping"<<endl;
    cout<<endl;
    v2.swap(v3);
     for ( it = v2.begin(); it != v2.end(); it++)
    {
     
      cout<<*it<<" ";
    }
    cout<<endl;
    
     for ( it1 = v3.begin(); it1 != v3.end(); it1++)
    {
     
      cout<<*it1<<" ";
    }
    v2.resize(6,1);
    cout<<endl;
     for ( it = v2.begin(); it != v2.end(); it++)
    {
     
      cout<<*it<<" ";
    }
    cout<<endl;
    
    
}