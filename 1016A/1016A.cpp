#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,m;cin>>n>>m;

    lli p = m;
    while(n--)
    {
        int d=0;
        lli nm; cin>>nm;

        p-=nm;
        if(p>0)
        {
            cout<<d<<' ';
            continue;
        }
        d++;
        nm = abs(p);
        p = m;
        d += (nm/p);
        p -= (nm%p);
        cout<<d<<' ';
    }

    return 0;
}
