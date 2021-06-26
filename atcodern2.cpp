#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100010]={0},p[100010]={0},x[100010]={0},flag = 1000000000;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        cin>>p[i];
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        if(x[i]-a[i]>0)
        {
            if(p[i]<flag)
                flag = p[i];
        }
    }
    if(flag == 1000000000)
        cout<<"-1"<<endl;
    else
        cout<<flag<<endl;
}
