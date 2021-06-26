#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[100000];
    cin>>n>>k;
    int count = 0,f;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%10 == k){
            count++;
        }
    }
    cout<<count<<endl;
}
