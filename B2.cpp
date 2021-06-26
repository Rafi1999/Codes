#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,s,a[100000],b[100000],flag=0;
    cin>>p>>q>>s;
    /*for(int i=1;i*i<=s;i++)
        {
            a[i]=p*i;
            b[i]=q*i;
        }
    */for(int i =1; i<=s; i++)
    {

        if((i%p==0)&&(i%q==0))
        {
            cout<<"yes"<<endl;
            flag++;
            break;
        }

    }
    if(flag==0)
        cout<<"no"<<endl;

    return 0;
}
