#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    int n;cin>>n;
    vector<lli>v;
    set<lli>st;
    while(n--)
    {
        lli i;cin>>i;
        v.push_back(i);
        st.insert(i);
    }
    int ans=0;
    for(auto i:st)
    {
        ans = max(ans,count(v.begin(),v.end(),i));
    }
    cout<<ans<<endl;
}
