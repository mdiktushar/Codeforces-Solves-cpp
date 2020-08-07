#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        lli a[n],b[n];
        lli amin=0; lli bmin = 0;

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        amin = *min_element(a,a+n);
        bmin = *min_element(b,b+n);

        lli ans = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>amin && b[i]>bmin)
            {
                lli p1 = a[i]-amin;
                lli p2 = b[i]-bmin;
                lli temp = min(p1,p2);
                a[i]-=temp; b[i]-=temp;
                ans+=temp;
            }
            if(a[i]>amin)
            {
                ans += a[i]-amin;
            }
            if(b[i]>bmin)
            {
                ans += b[i]-bmin;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

