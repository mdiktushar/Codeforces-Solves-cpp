#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int f = s.find("*");
    if(n-1>m)
        cout<<"NO"<<endl;
    else if(f==-1)
    {
        if(s==t)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        int f = s.find("*");
        string s1 = s.substr(0,f);
        string s2 = s.substr(f+1);

        int f1 = t.find(s1);
        reverse(t.begin(),t.end());
        reverse(s2.begin(),s2.end());

        int f2 = t.find(s2);
        if(f1==0&&f2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
