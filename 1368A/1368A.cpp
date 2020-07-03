#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli a,b,c;
        cin>>a>>b>>c;
        int i=0;
        while(a<=c && b<=c)
        {
            if(a>b)swap(a,b);
            //cout<<a<<' '<<b<<endl;
            a+=b;
            //cout<<a<<' '<<b<<endl;
            i++;
        }
        cout<<i<<endl;
    }

    return 0;
}
