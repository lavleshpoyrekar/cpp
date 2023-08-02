#include <iostream>
using namespace std;
int cheak(int arr[],int size,int key)
{ int ans;
  for(int i=0;i <=size;i++){
    if(arr[i]==key){
         ans=i;
    }
  }
  return ans;
}

int main()
{
    int a,b,key,size=100;
    int fib[1000];
     a=0;
     b=1;

 for ( int i = 2; i <= size; i++)
 {
   int next=a+b;
   fib[i]=next;
   a=b;
   b=next;
 }
 fib[0]=0;
 fib[1]=1;
 cout<<"enter key"<<endl;
 cin>>key;
 int n=cheak(fib,100,key);
 cout<<n<<endl;
 
}