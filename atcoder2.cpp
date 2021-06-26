#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    char s[10000];
    cin>>n>>x;
    cin>>s;
    int l = strlen(s);
    int k = l;
    for(int i=0;i<l;i++,k--)
    {
        if(s[k-1]=='x')
        {
            if(x==0)
                x = 0;
            else
                x--;
        }
        else if(s[k-1]=='o')
        {
            x++;
        }
    }
    cout<<x;
}
