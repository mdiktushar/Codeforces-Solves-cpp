#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    string rs = s;
    reverse(rs.begin(),rs.end());
    if(s==rs)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    while(true)
    {
        if(s.back()!='0')
            break;
        s.pop_back();
    }
    rs=s;
    reverse(rs.begin(),rs.end());
    if(s==rs)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
