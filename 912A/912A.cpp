#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli Y,B;cin>>Y>>B;
    lli y,g,b;cin>>y>>g>>b;

    lli sum = 0;
    lli t = y*2;
    if(Y>=t)
        Y-=t;
    else
    {
        t -= Y;
        Y=0;
        sum += t;
    }
    if(Y>=g)
        Y-=g;
    else
    {
        t = g;
        t -= Y;
        Y=0;
        sum += t;
    }
    if(B>=g)
        B-=g;
    else
    {
        t = g;
        t -= B;
        B=0;
        sum += t;
    }
    t = b*3;
    if(B<t)
    {
        t -= B;
        sum += t;
    }
    cout<<sum<<endl;

    return 0;
}
