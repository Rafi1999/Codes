#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],b[10000],n,x=0,y=0,s,max=0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            x = b[j]-b[i];
            y = a[j]-a[i];
            s = x/y;
            if(s>max)
                max = s;
        }
    }
    cout<<max<<endl;
}
