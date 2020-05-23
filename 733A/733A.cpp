#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int n = s.size();

    int r=0; int p=0;
    for(int i=0; i<n; i++)
    {
        p++;
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'
           ||s[i]=='U'||s[i]=='Y')
        {
            r = max(r,p);
            p = 0;
        }
    }
    r = max(r,++p);
    cout<<r<<endl;

    return 0;
}
