#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli n,k;cin>>n>>k;
        lli sum = (k-1)/(n-1);
        cout<<sum+k<<endl;
    }

    return 0;
}
