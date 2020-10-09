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
        int mx = max(a,max(b,c));
        cout<<++mx<<endl;
    }
    return 0;
}
