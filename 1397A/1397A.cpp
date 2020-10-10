#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s[n];
        set<char>st;
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            for(int j=0; j<s[i].size(); j++)
            {
                st.insert(s[i][j]);
            }
        }
        string S;
        for(int i=0; i<n; i++)
            S+=s[i];
        bool f=false;
        for(auto j:st)
        {
            int c = count(S.begin(),S.end(),j);
            //cout<<c<<endl;
            if(c%n!=0)
            {
                f=true;break;
            }
        }
        if(f==true)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}
