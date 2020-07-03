#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int n;cin>>n;
    if(s.size()<n)
        cout<<"impossible"<<endl;
    else
    {
        set<char>st;
        for(int i=0; i<s.size(); i++)
            st.insert(s[i]);

        int len = st.size();
        if(len>=n)
            cout<<0<<endl;
        else
            cout<<n-len<<endl;
    }

    return 0;
}
