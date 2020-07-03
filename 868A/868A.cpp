#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int n;cin>>n;
    bool f=false,a=false,b=false;
    string res;
    while(n--)
    {
        string s1;cin>>s1;
        if(s==s1)
            f=true;

        if(s1[1]==s[0]&&a==false)
        {
            a=true;
        }
        if(s1[0]==s[1]&&b==false)
        {
            b=true;
        }
    }
    if(f==true||(a==true&&b==true))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
