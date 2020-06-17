#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;

    lli sum = (n*(n+1))/2;

    if(sum%2==0)
        cout<<0<<endl;
    else cout<<1<<endl;
    sum/=2;
    vector<int>v;
    for(lli i=n; ;i--)
    {
        if(sum==0)
            break;
        if(i<=sum)
        {
            sum-=i;
            v.push_back(i);
        }
    }
    cout<<v.size()<<' ';
    for(auto i:v)
        cout<<i<<' ';

    return 0;
}
