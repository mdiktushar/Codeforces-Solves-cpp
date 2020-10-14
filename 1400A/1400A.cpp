#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        char c = s[n-1];
        s.clear();
        for(int i=0; i<n; i++)
            s+=c;
        cout<<s<<endl;
    }

    return 0;
}
