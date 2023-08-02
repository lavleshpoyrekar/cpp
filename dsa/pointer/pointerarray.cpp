#include <iostream>
using namespace std;
int main()
{
int arr[] = {4, 5, 6, 7};
int *p = (arr + 1);
cout << *arr + 9<<endl;;

cout<<p<<" "<<arr+1<<" "<<*p<<endl;

cout<<arr<<endl;
cout<<arr[2]<<" "<<*(arr+2)<<endl; //cout<<arr[2]<<" "<<*(arr+2)<<endl==cout<<2[arr]<<" "<<*(2 + arr)<<endl;
cout<<2[arr]<<" "<<*(2 + arr)<<endl;
int temp[10]={1, 2,3,5};
cout<<sizeof(temp)<<endl;
cout<<sizeof(&temp)<<endl;
cout<<sizeof(*temp)<<endl;
int *z= &temp[0];
cout<<sizeof(z)<<endl;
cout<<sizeof(&z)<<endl;
cout<<sizeof(*z)<<endl;
cout<<(temp)<<endl;
cout<<(&temp)<<endl;
cout<<(*temp)<<endl;
cout<<(z)<<endl;
cout<<(&z)<<endl;
cout<<(*z)<<endl;

}