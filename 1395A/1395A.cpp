#include<bits/stdc++.h>
#define lli long long
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli a[4];
        int P = 0;
        for(int i=0; i<4; i++)
        {
            cin>>a[i];
            if(a[i]%2)P++;
        }
        if(P<=1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(a[0] && a[1] && a[2])
        {
            a[0]--;
            a[1]--;
            a[2]--;
            a[3]+=3;
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }

        P = 0;
        for(int i=0; i<4; i++)
        {
            if(a[i]%2)P++;
        }
        if(P<=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
