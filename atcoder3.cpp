#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z,a,b,c,s;
    cin>>x>>y>>z;
    a = 100 - x;
    b = 100 - y;
    c = 100 - z;
    double sum = x+y+z;
    s = (a*(x/(double)sum)) + (b*(y/(double)sum)) + (c*(z/(double)sum));
    cout<<s<<endl;
}
