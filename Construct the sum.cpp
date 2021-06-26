#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,s,count,a,b;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        count = 0;
        cin>>n>>s;
        a = abs(n-s);
        b = abs(s-a);
        cout<<count<<" "<<b<<" "<<a<<endl;
    }
}

