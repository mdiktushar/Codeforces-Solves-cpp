#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int res=0;
    for(int i=0; i<n-1; i+=2)
    {
        if(s[i]==s[i+1])
        {
            s[i]='a';
            s[i+1]='b';
            res++;
        }
    }
    cout<<res<<endl;
    cout<<s<<endl;

    return 0;
}
