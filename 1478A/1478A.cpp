#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        set<int>st;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        int mx = INT_MIN;
        for(auto i:st)
        {
            int c = count(a,a+n, i);
            mx = max(mx, c);
        }
        cout<<mx<<endl;
    }

    return 0;
}
