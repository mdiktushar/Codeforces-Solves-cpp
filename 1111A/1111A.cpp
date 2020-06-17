#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size())
        cout<<"NO"<<endl;
    else
    {
        string vow = "aeiou";
        int n=s.size();
        for(int i=0; i<n; i++)
        {
            int s1 = vow.find(s[i]);
            int s2 = vow.find(t[i]);
            if((s1>-1&&s2<0)||(s1<0&&s2>-1))
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }

    return 0;
}
