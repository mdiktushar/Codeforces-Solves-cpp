#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;cin>>x;
    int t,n;cin>>t>>n;
    t = t*60+n;
    int res = 0;
    while(true)
    {
        int h = t/60; int m = t%60;
        //cout<<h<<' '<<m<<endl;
        if(h/10==7 || h%10==7 || m%10==7 || m/10==7)
        {
            break;
        }
        res++;
        t = (1440+t-x)%1440;
    }
    cout<<res<<endl;

    return 0;
}
