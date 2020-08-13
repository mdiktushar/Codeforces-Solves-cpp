#include<bits/stdc++.h>
#define lli long long
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli a,b,n;
        cin>>a>>b>>n;
        if(n%3==0)
            cout<<a<<endl;
        else if(n%3==1)
            cout<<b<<endl;
        else
            cout<<(a^b)<<endl;
    }

    return 0;
}
