#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,a[100000],sum=0;
    cin>>n>>t;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]<t)
        {
            sum+=a[i];
            if(sum<t)
                continue;
            else
                break;
        }
        else if(a[i]>t)
            break;
    }
    cout<<sum<<endl;
}
