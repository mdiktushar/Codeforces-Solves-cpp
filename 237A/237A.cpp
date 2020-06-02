#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v;
    set<int>st;
    while(n--)
    {
        int h,m;
        cin>>h>>m;
        h*=60;
        m+=h;
        v.push_back(m);
        st.insert(m);
    }
    int m=0;
    for(auto i:st)
    {
        int c = count(v.begin(),v.end(),i);
        m = max(m,c);
    }
    cout<<m<<endl;
}
