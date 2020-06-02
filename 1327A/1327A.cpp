#include<bits/stdc++.h>
#define lli long long int
#define y cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        lli n,k;cin>>n>>k;
        if(k*k<=n && k%2==n%2)
            y;
        else no;

    }

    return 0;
}
