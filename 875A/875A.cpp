#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli n;cin>>n;
    set<int>st;
    lli i,sum=0;
    if(n>=100)
        i=n-100;
    else i=0;
    for(; i<=n; i++)
    {
        sum=0;
        string s=to_string(i);
        sum+=i;
        for(int j=0; j<s.size(); j++)
            sum+=s[j]-'0';
        if(sum==n)
            st.insert(i);
    }

    cout<<st.size()<<endl;
    for(auto i:st)
        cout<<i<<endl;
    return 0;
}
