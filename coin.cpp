#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100000]= {0};
    char s[100000];
    for(int i=0; i<3; i++)
    {
        cin>>s;
        if(s[1]=='<')
            a[s[2]]++;
        else
            a[s[0]]++;
    }
    if(a['A']&&a['B']&&a['C'])
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                if(a['A'+j]==i)
                    cout<<(char)('A'+j);
    }
    cout<<endl;
    return 0;
}
