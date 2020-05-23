#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    bool f = false;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]>90)
        {
            f=true;break;
        }
    }
    if(f==false && s[0]>90)
    {
        s[0]-=32;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]<91)
                s[i]+=32;
        }
    }
    else if(f==false && s[0]<97)
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]<91)
                s[i]+=32;
        }
    }

    cout<<s<<endl;

    return 0;
}
