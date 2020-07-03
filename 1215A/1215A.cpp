#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli players_max(lli a1, lli a2, lli k1, lli k2, lli n)
{
    lli r1=0,r2=0;
    lli t1 = a1*k1;
    lli t2 = a2*k2;
    if(t1>=n)
    {
        r1=n/k1;
        return r1+r2;
    }
    else
    {
        r1 = t1/k1;
        n -= r1*k1;
    }
    r2 = n/k2;
    return r1+r2;
}


void player_min(lli a1, lli a2, lli k1, lli k2, lli n)
{
    lli t1 = a1*k1-a1;
    lli t2 = a2*k2-a2;

    if(t1+t2>=n)
        cout<<0<<' ';
    else
    {
        cout<<n-(t1+t2)<<' ';
    }
}

int main()
{
    lli a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;

    if(k1<k2)
    {
        player_min(a2,a1,k2,k1,n);
        lli mx = players_max(a1,a2,k1,k2,n);
        cout<<mx<<endl;
    }
    else
    {
        player_min(a1,a2,k1,k2,n);
        lli mx = players_max(a2,a1,k2,k1,n);
        cout<<mx<<endl;
    }

    return 0;
}
