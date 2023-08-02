#include <iostream> 
#include <algorithm>
#include<string>
using namespace std;
string removeSpecialCharacter(string s)
{
    int j=0;
    for (int i = 0; i < s.size(); i++)
    {
        if((s[i]>='A' &&  s[i]<='Z' ) || (s[i]>='a' &&  s[i]<='z' ) || (s[i]>='1' &&  s[i]<='9' ))
          {
            s[j]=s[i];
            j++;
          }
          
    }
    return s.substr(0, j);
}
bool checkPalindrome(string s)
{   
    s=removeSpecialCharacter(s);
    cout<<s;
    int S=0;
    int E= s.size()-1;
   
    while(S<=E)
    {
        if(tolower(s[S])!=tolower(s[E])) 
        {   
            cout<<s[S]<<" "<<s[E]<<endl;
            int count=0;
            cout<<count;
            return 0;
            }
        else {
            S++;
            E--;
        }
    }
    return 1;
}
int main()
{
    string s = "0P";
    
    
    int ans1=checkPalindrome(s);
    cout<<endl;
    cout<<ans1;
}