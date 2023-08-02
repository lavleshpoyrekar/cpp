#include<iostream>
using namespace std;
int fact(int n)
{
  if(n==0) return 1;

  return n*fact(n-1);
}
int power(int n)
{
  if(n==0) return 1;

  return 2*power(n-1);
}
int print(int n){
    if(n==0) { return 1 ;}
   // cout<<n<<endl;  in this situation print 5,4,3,2,1 becuse first print then pass in to recursive funtion(head recusion)
    print(n-1);
     cout<<n<<endl;   //in this situation print 1,2,3,4,5 becuse first pass in to recursive funtion then print hence first that value print which is op of last recursive funtion(tail recusion)
}
int main()
{int n;
cout<<"enter element"<<endl;
cin>>n;
int ans1=fact(n);
cout<<"factorial "<<ans1<<endl;
int ans2=power(n);
cout<<"power "<<ans2<<endl;
print(n);
return 0;


}