#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    string s;cin>>s;
    while(m--)
    {
        int i;cin>>i>>n;
        char c1,c2;cin>>c1>>c2;
        for(--i; i<n; i++)
        {
            if(s[i]==c1)s[i]=c2;
        }
    }
    cout<<s<<endl;
    return 0;
}
