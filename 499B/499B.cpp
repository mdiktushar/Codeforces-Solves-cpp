#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>m>>n;
    string w1[n];
    string w2[n];
    string s[m];

    for(int i=0; i<n; i++)
    {
        cin>>w1[i];
        cin>>w2[i];
    }

    for(int i=0; i<m; i++)
        cin>>s[i];

    string res;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[i]==w1[j])
            {
                if(w1[j].size()>w2[j].size())
                    res+=w2[j];
                else
                    res+=w1[j];
                res+=' ';
            }
        }
    }
    cout<<res<<endl;

    return 0;
}
