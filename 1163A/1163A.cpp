#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int a,b;
    a = n/2;
    b = n%2;
    if(m==0)
        cout<<1<<endl;
    else if(m==n)
        cout<<0<<endl;
    else if(m<=a)
        cout<<m<<endl;
    else if(m>a)
        cout<<n-m<<endl;

    return 0;
}
