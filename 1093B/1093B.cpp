#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int c = count(s.begin(),s.end(),s[0]);
        if(c==s.size())
            cout<<-1<<endl;
        else
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }

    }

    return 0;
}
