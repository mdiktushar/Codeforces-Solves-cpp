#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    string s1;int f=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0'&&f==0)
        {
            f++;
            continue;
        }
        if(i==s.size()-1 && s[i]=='1' && f==0)
        {
            continue;
        }
        s1+=s[i];
    }
    cout<<s1<<endl;

    return 0;
}
