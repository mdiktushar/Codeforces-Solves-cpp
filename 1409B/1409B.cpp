#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;

        lli A,B,C,D,N;
        A = a, B = b, C = x, D = y, N = n;

        lli t1,t2;
        t1 = a-x;
        t2 = b-y;
        if(t1>=n)
            a-=n;
        else
        {
            a-=t1;
            n-=t1;

            b -= min(t2,n);
        }
        lli ans1 = a*b;

        a = A, b = B, x = C, y = D, n = N;

        t1 = a-x;
        t2 = b-y;
        //cout<<b<<'-'<<y<<'='<<t2<<endl;

        if(t2>=n)
        {
            b-=n;
        }
        else
        {
            b-=t2;
            n-=t2;

            a -= min(t1,n);
        }
        lli ans2 = a*b;
        //cout<<a<<' '<<b<<endl;
        cout<<min(ans1,ans2)<<endl;

    }

    return 0;
}
