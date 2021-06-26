#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s1=0,s2=0;
    cin>>a>>b;
    while(a>0)
    {
        s1 += a%10;
        a = a/10;
    }
    while(b>0)
    {
        s2 += b%10;
        b = b/10;
    }
    if(s1>s2)
        cout<<s1<<endl;
    else
        cout<<s2<<endl;
}
