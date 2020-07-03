#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v;
    set<int>st;
    while(n--)
    {
        int i;cin>>i;
        v.push_back(i);
        st.insert(i);
    }
    if(st.size()!=2)
        cout<<"NO"<<endl;
    else
    {
        int a[2],s=0;
        for(auto i:st)
        {
            a[s++] = count(v.begin(),v.end(),i);
        }
        if(a[0]!=a[1])
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(auto i:st)
                cout<<i<<' ';
            cout<<endl;
        }
    }

    return 0;
}
