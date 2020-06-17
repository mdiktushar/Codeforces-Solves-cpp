#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n,m;cin>>n>>m;
    vector<lli> ls1, ls2;
    for(lli i=0; i<n; i++)
    {
        lli j;cin>>j;
        ls1.push_back(j);
    }

    for(lli i=0; i<m; i++)
    {
        lli j;cin>>j;
        ls2.push_back(j);
    }
    sort(ls1.begin(),ls1.end());
    sort(ls2.begin(),ls2.end());
    for(lli i=0; i<n; i++)
    {
        auto f = find(ls2.begin(),ls2.end(),ls1[i]);

        if(f!=ls2.end())
        {
            cout<<ls1[i]<<endl;
            return 0;
        }
    }
    lli a=ls1[0],b=ls2[0];
    cout<<min(a,b)<<max(a,b)<<endl;


    return 0;
}
